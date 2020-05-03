#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int i, j;
  char k[64];
  char x[64];
  char y[64];
  char h[64];
  char hint[64];
  char gcc[512];
  for (i = 1; i < 4; i++)
  {
    sprintf(x, "%d", i);
    strcpy(k, "gcc ~/C-lings/Problems/");
    strcpy(y, ".c");
    strcat(k, x);
    strcat(k, y);
    sprintf(gcc, "%s", k);

    j = system(gcc);

    if (j == 0)
    {
      printf("CONGRATULATIONS! %s is compiled\n", k);
    }
    else
    {
      printf("%s not compiled, \n solve error to compile\n for hint type <problem.hint>\n", k);

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
