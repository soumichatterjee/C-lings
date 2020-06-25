#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

void get_directory(char *, int);
void compile();
int Complete();
int main()
{
    int i;
    for (i = 1; i < 4; i++)
    {
        char *directory[512];
        get_directory((char *)directory, i);
        compile(directory);
        if(Complete(directory) != 1)
        {
            printf("Remove //I AM NOT DONE comment to continue compilation \n");
            break;
        }
    }
}
void get_directory(char *path, int i)
{
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL)
    {
        printf("problem-");
    }
    else
    {
        perror("getcwd() error");
    }

        sprintf(path,"%s%s%d%s",cwd,"/Problems/",i,".c");
        printf("%s\n", path);

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
   
   sprintf(file_name,"%s",files);

   if((fp = fopen(file_name,"r")) == NULL)
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

