#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

char get_directory(char *, int);
void compile();
int main()
{
    int i;
    for (i = 1; i < 4; i++)
    {
        char *gcc[512];
        void *name;
        name = get_directory((char *)gcc, i);
        compile(name);
    }
}
char get_directory(char *gcc, int i)
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

    
    char x[64];
    char k[64];
    char p[64];
    char y[64];

    {
        sprintf(x, "%d", i);
        strcpy(k, "gcc ");
        strcat(k, cwd);
        strcpy(p, "/Problems/");
        strcat(k, p);
        strcpy(y, ".c");
        strcat(k, x);
        strcat(k, y);
        sprintf(gcc, "%s", k);
        printf("%s\n", gcc);
    }

    return (*(char *)gcc);
}
void compile()
{
    char gcc[512];
    char h[64];
    char hint[64];
    int j;
    j = system(gcc);
    printf("%d", j);

    if (j == 0)
    {
        printf("CONGRATULATIONS! compiled\n");
    }
    else
    {
        printf(" not compiled, \n solve error to compile\n for hint type <problem.hint>\n");

        strcpy(h, "problem.hint");
        scanf("%s", hint);
        if (strcmp(h, hint) == 0)
        {
            printf("try checking print statement\n");
        }
    }
}
