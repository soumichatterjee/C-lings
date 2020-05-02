#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int i, j;
  char k[64];
  char x[64];
  char y[64];
  char gcc[512];
  for (i = 1; i < 3; i++)
  {
    sprintf(x, "%d", i);
    strcpy(k, "gcc ");
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
      printf("%s not compiled, for hint type <problem.hint>\n", k);
    }
  }

  return 0;
}