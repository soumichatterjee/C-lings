// Flemming has found out chromosome numbers of more organisms, Housefly = 12, Fruitfly = 8, apple = 34, Maize = 20, Rice = 24, Onion = 32, Ophioglossum = 1260.
// Now he wants to print all the numbers from both the arrays in ascending order. Help him to do it.
// For hint type "hint".

#include <stdio.h>

int main()
{
    int chromosome1[] = {38, 42, 46, 48, 56, 78, 380};
    int chromosome2[] = {8, 12, 20, 24, 32, 34, 1260};
    int chromosome[50] = {0};
    int size = 0;
    int size1 = sizeof(chromosome1) / sizeof(int);
    int size2 = sizeof(chromosome2) / sizeof(int);

    size = merge(chromosome1, size1, chromosome2, size2, chromosome);
    printf("number of chromosomes in organisms in ascending order: ");
    printchromo(chromosome, size);
    return 0;
}

int merge(int *chromosome1, int size1, int *chromosome2, int size2, int *chromosome)
{
    int i = 0, j = 0, k = 0;
    while ((.......) && (.......))
    {
        //code//
    }

    while (......)

        //code//                         //write the function merge

        while (.......)

            //code//

            return i;
}

void printchromo(int *chromosome, int size)
{
    int i = 0;
    while (i < size)
    {
        printf("%d ", chromosome[i++]);
    }
    printf("\n");
}
