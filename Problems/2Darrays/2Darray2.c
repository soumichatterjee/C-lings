// Write a program to multiply two matrix using function and the mentioned variables.

#include<stdio.h>
void multiply(int matrixone[5][5], int matrixtwo[5][5], int, int, int);

void main()
{
    int matrixone[5][5], matrixtwo[5][5];
    int i, j, k, m, n, p;
    printf("Enter the number of rows and columns for 1st matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the 1st matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d", &matrixone[i][j]);
        }
    }
    //no of col of 1st mat = no of rows of 2nd mat
    printf("Enter the number of columns for 2nd matrix\n");
    scanf(...........);
    printf("Enter the elements of the 2nd matrix\n");
    for (i=0;i<n;i++)
    {
        for (..........)
        {
            scanf("%d", &matrixtwo[i][j]);
        }
    }

    printf("1st matrix\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t", matrixone[i][j]);
        }
        printf("\n");
    }
    printf("2nd matrix\n");
    for (...........)
    {
        for (..........)
        {
            printf("%d\t", matrixtwo[i][j]);
        }
        printf("\n");
    }
    multiply(matrixone, matrixtwo, m, n, p);
}

void multiply(int matrixone[5][5], int matrixtwo[5][5], int m, int n, int p)
{
    int mul[5][5], i, j, k;
    for (...........)
    {
        for (............)
        {
            // code


        }
    }
}

printf("The resultant matrix formed on multiplying the two matrices\n");
for (i=0;i<m;i++)
{
    for (j=0;j<p;j++)
    {
        printf("%d\t", mul[i][j]);
    }
    printf("\n");
}
}