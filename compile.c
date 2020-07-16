#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
struct lists
{
    char array[50][100];
};


struct lists get_directory(char *,int *);
int compile();
int Complete();
void choppy(char *);
int main(int argc,char **argv)
{
    if(argc == 1)
    {
        printf("Enter a valid argument verify/watch \n");
        exit(-1);
    }  
    char *directory = malloc(128 * sizeof(char));
    struct lists dir_list;
    int exe_cnt =0;
    dir_list = get_directory((char *)directory,&exe_cnt); 
 
    if(strcmp("watch",argv[1]) == 0)
    {
        int j=0;
        while(j<exe_cnt+1)
         {
            sprintf(directory,"%s", dir_list.array[j]);
            struct lists prob_list;
            int counts=0;
            printf("directoy_data: %s \n" , directory);
            prob_list = get_directory((char *)directory,&counts); 
            printf("inside while %s", directory);
            for(int i=0; i<counts; i++){
                if(strstr(prob_list.array[i],"hint.txt") != NULL)
                {   
                    j++;
                    continue;
                }
                if(compile(prob_list.array[i]) == 0)
                {
                    if(Complete(prob_list.array[i]) != 1)
                    {
                        printf("Remove //I AM NOT DONE comment to continue compilation \n");
                        char *u;
                        scanf("%c",u);
                    }
                    else j++;
                }
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
 struct lists get_directory(char *path, int *count)
{
    char cwd[PATH_MAX] = {0}, command[128] = {0}, *line = NULL;
    size_t len = 0;
    struct lists result;
    char *file_name;
    printf("Value passed in get_directory: :%s \n",path);
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        printf("problem- \n");
    }
    else
    {   
        perror("getcwd() error");
    }
    if(strcmp(path,"") == 0)
    {
        sprintf(command,"%s%s%s","ls ",cwd,"/Problems/ > file.txt");
        file_name = "file.txt";
    }
    else
    {
        choppy(path);
        strcat(path,"/");
        sprintf(command,"%s%s%s","ls ",path," > problem.txt");
        file_name = "problem.txt";
    }    
    printf("Inside get_directoy \n");
	printf("\n Total command after strcats: %s \n", command);
    system(command);


        FILE *fp;
        if((fp = fopen(file_name,"r"))== NULL)
        {
            perror("Unable to Open file");
            exit(1);
        }
	printf("\n path %s, cwd: %s \n",path,cwd);
    if(strcmp(path,"") == 0)
    {
        sprintf(path,"%s%s",cwd,"/Problems/");
    }
	printf("late path: %s \n", path);
        int j = 0;
        while(getline(&line,&len,fp)!= -1){
            sprintf(result.array[j], "%s%s", path, line);
		    printf("%s",result.array[j]);
            j++;       
    }   
        *count = j;
        fclose(fp);
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

void choppy( char *s )
{
    s[strcspn ( s, "\n" )] = '\0';
}