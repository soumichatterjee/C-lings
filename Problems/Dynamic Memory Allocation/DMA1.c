// Launcelot was having trouble to do sum of his total income of the month. He understood that the problem was due to insufficient memory allocation.
// Help him to solve.
// For hints type "hint"

#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, i, *ptr, sum = 0;
printf("Enter number of elements: ");
scanf("%d", &n);
ptr = ..............;

if(ptr == NULL)
{
printf("Error! memory not allocated.");
exit(0);
}

printf("Enter elements: ")
for(i = 0; i < n; ++i)
{
scanf("%d", ptr + i);
sum += *(ptr + i);

}

   
  

printf("Sum = %d", sum);

// deallocate the memory


return 0;


// I AM NOT DONE!