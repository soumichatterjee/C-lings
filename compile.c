#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
struct lists
{
    char array[50][100];
};

int exe_cnt =0; // Total number of excerises
struct lists get_directory(char *);
int compile();
int Complete();
int main(int argc,char **argv)
{
    if(argc == 1)
    {
        printf("Enter a valid argument verify/watch \n");
        exit(-1);
    }  
    char *directory = malloc(128 * sizeof(char));
    struct lists dir_list;
    dir_list = get_directory((char *)directory); 
 
    if(strcmp("watch",argv[1]) == 0)
    {
        int j=0;
        while(j<exe_cnt)
         {
            sprintf(directory,"%s", dir_list.array[j]);
            printf("inside while %s", directory);
            if(compile(directory) == 0)
            {
                if(Complete(directory) != 1)
                {
                    printf("Remove //I AM NOT DONE comment to continue compilation \n");
                    char *u;
                    scanf("%c",u);
                }
                else j++;
            }        
        }
    }
    else if(strcmp("verify",argv[1]) == 0)
    {
        printf("\n Inside verify %s \n",directory);
	for(int j=1; j<exe_cnt; j++)
        {
            sprintf(directory,"%s",dir_list.array[j]);
            compile(directory);
        }
    }
    else
    {
        printf("Commnad not found \n");
    }
    
    
}
 struct lists get_directory(char *path)
{
    char cwd[PATH_MAX] = {0}, command[128] = {0}, *line = NULL;
    size_t len = 0;
    struct lists result;
    printf("Value passed in get_directory: :%s \n",path);
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        printf("problem- \n");
    }
    else
    {
        perror("getcwd() error");
    }
        sprintf(command,"%s%s%s","ls ",cwd,"/Problems/ > file.txt");
        system(command);
	printf("\n Total command after strcats: %s \n", command);
        FILE *fp;
        if((fp = fopen("file.txt","r"))== NULL)
        {
            perror("Unable to Open file");
            exit(1);
        }
	printf("\n path %s, cwd: %s \n",path,cwd);
	sprintf(path,"%s%s",cwd,"/Problems/");
	printf("late path: %s \n", path);
        int j = 0;
        while(getline(&line,&len,fp)!= -1){
                sprintf(result.array[j], "%s%s", path, line);
		printf("%s",result.array[j]);
            
            j++;       
    }
        exe_cnt = j;
        return result;
        //sprintf(path,"%s%s%d%s",cwd,"/Problems/",i,".c");
        //printf("%s\n", path);

}
int compile(char *paths)
{
    char h[64] = {0};
    char hint[64] = {0};
    char *gcc = malloc(128 * sizeof(char));

    sprintf(gcc,"%s%s","gcc ",paths);
    int j = system(gcc);
    //printf("%d", j);

    if (j == 0)
    {
      printf("\nCONGRATULATIONS! problem compiled\n");
      return j;
    }
    else
    {
      printf("\n solve error to compile\n for hint type <problem.hint>\n");

      strcpy(h, "problem.hint");
      scanf("%s", hint);
      if (strcmp(h, hint) == 0)
      {
        printf("try checking print statement\n");
      }
    }
    return j;
}

int Complete(char *files)
{
   char temp[512] = {0};
   char *file_name = malloc( 128 * sizeof(char));
   FILE *fp;
   char *str = "//I AM NOT DONE";
    sprintf(file_name,"%s",strtok(files,"\n"));
    printf("%s \n",files);
   if((fp = fopen(files,"r")) == NULL)
    {    
       perror("File Opening Error");
       return(-1);
    }
   while(fgets(temp,512,fp) != NULL){
       if(strstr(temp,str) != NULL)
       {
               return(0);
       }
   }
   if(fp)
    {
       fclose(fp);
    }
   return(1);
  
}

