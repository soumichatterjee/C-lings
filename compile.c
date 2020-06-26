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
void compile();
int Complete();
int main(int argc,char **argv)
{
    if(argc == 1)
    {
        printf("Enter a valid argument verify/watch \n");
        exit(-1);
    }  
    char *directory[512];
    struct lists dir_list;
    dir_list = get_directory((char *)directory); 
 
    if(strcmp("watch",argv[1]) == 0)
    {
        int j=0;
        while(j<exe_cnt)
         {
            sprintf(directory, dir_list.array[j]);
            compile(directory);
            if(Complete(directory) != 1)
            {
                printf("Remove //I AM NOT DONE comment to continue compilation \n");
                char *u;
                scanf("%c",u);
            }
            else j++;
            
        }
    }
    else if(strcmp("verify",argv[1]) == 0)
    {
        for(int j=1; j<exe_cnt; j++)
        {
            sprintf(directory, (char *)dir_list.array[j]);
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
    char cwd[PATH_MAX],command[128],*line =NULL;
    size_t len = 0;
    struct lists result;
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        printf("problem- \n");
    }
    else
    {
        perror("getcwd() error");
    }
        strcat(command,"ls ");
        strcat(command,cwd);
        strcat(command,"/Problems/ > file.txt");
        system(command);
        FILE *fp;
        if((fp = fopen("file.txt","r"))== NULL)
        {
            perror("Unable to Open file");
            exit(1);
        }
        strcat(path,cwd);
        strcat(path,"/Problems/");
        int j=0;
        while(getline(&line,&len,fp)!= -1){
                strcat(result.array[j],path);
                strcat(result.array[j],line);
                printf("%s",result.array[j]);
            
            j++;       
    }
        exe_cnt =j;
        return result;
        //sprintf(path,"%s%s%d%s",cwd,"/Problems/",i,".c");
        //printf("%s\n", path);

}
void compile(char *paths[512])
{
    char h[64];
    char hint[64];
    char *gcc[512];

    sprintf(gcc,"%s%s","gcc ",paths);
    int j = system(gcc);
    //printf("%d", j);

    if (j == 0)
    {
      printf("\nCONGRATULATIONS! problem compiled\n");
    }
    else
    {
      printf("\nproblem not compiled, \n solve error to compile\n for hint type <problem.hint>\n");

      strcpy(h, "problem.hint");
      scanf("%s", hint);
      if (strcmp(h, hint) == 0)
      {
        printf("try checking print statement\n");
      }
    }
}

int Complete(char *files[512])
{
   char temp[512];
   char *file_name[512];
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

