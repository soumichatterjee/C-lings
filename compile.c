#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

void get_directory(char *, int);
void compile();
int main()
{
    int i;
    for (i = 1; i < 4; i++)
    {
        char *directory[512];
        get_directory((char *)directory, i);
        compile(directory);
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
    printf("%d", j);

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

  return 0;
}