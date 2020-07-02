#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

int main()
{
  int i, j;
  char k[64];
  char x[64];
  char y[64];
  char h[64];
  char hint[64];
  char gcc[512];
  char p[64];
  char cwd[PATH_MAX];
  if (getcwd(cwd, sizeof(cwd)) != NULL)
  {
  }
  else
  {
    perror("getcwd() error");
    return 1;
  }
  for (i = 1; i < 4; i++)
  {
    sprintf(x, "%d", i);
    strcpy(k, "gcc ");
    strcat(k, cwd);
    strcpy(p, "/Problems/");
    strcat(k, p);
    strcpy(y, ".c");
    strcat(k, x);
    strcat(k, y);
    printf("%s", k);
    sprintf(gcc, "%s", k);

    j = system(gcc);

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