// Salerio, Gratiano and Lorenzo have raised fund for la Befana. Their collection on day 1 is {425, 343, 123} Euro respectively,
// On day 2 {345,656,432} Euro respectively.
// On day 3 {534,265,453} Euro respectively.
// Write a program using finctions to print the same in a 2D array.
// For hint type "hint"

#include<stdio.h>
int **allocate(int h, int w)

{
    int *p;
    int i, j;

    p = (int )malloc(sizeof(int *));
    for (i=0;i<h;i++)

        p[i] = (int *)malloc(sizeof(int));
    return(p);

}
void read_data(int p, int h, int w)

{
    int i, j;
    for (i=0;i<h;i++)
        for (j=0;j<w;j++)
            scanf("%d", &p[i][j]);
}
void print_data(int p, int h, int w)

{
    int i, j;
    for (i=0;i<h;i++)
    {

        for (j=0;j<w;j++)

            printf("%5d ", p[i][j]);
        printf("\n");
    }



    int main() {

        int **p; int M, N;

        printf("Give M and N \n");
        scanf("%d%d", &M, &N);
        p = allocate(M, N);
        read_data(p, M, N);

        printf("\nThe array read as \n");

        print_data(p, M, N);

        return 0;
    }
}

// I AM NOT DONE!