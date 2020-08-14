// After Flemming got the number of chromosomes of the mentioned organisms, Flemming wants to print them in ascending order.
// Write a function for the same.
// For hints type "hint"

#include <stdio.h>
void swap(int *prevchromo, int *nextchromo);
void ascendingchromo(int chromosome[], int n);
void printArray(int chromosome[], int size);

int main()
{
    int chromosome[] = {46, 42, 78, 38, 56, 48, 380};
    int n = sizeof(chromosome) / sizeof(chromosome[0]);
    printf("Original array: \n");
    printArray(chromosome, n);

    ascendingchromo(chromosome, n);
    printf("\nSorted chromosome number of animals in Ascending order: \n");
    printArray(chromosome, n);

    return 0;
}

void swap(int *prevchromo, int *nextchromo)
{
    
    //swap function

}

// Function to perform sorting in assending order
void ascendingchromo(int chromosome[], int n)
{
    int i, j, minchromo;

    // move boundary of unsorted subarray
    
    for (.............) //write the condition
    {

        // Find the minimum element and swap the minimum element with the first element 
       

        
        swap(&chromosome[minchromo], &chromosome[i]);
    }
}

// Function to print an array
void printArray(int chromosome[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", chromosome[i]);
    printf("\n");
}

// I AM NOT DONE!