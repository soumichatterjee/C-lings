// After solving the error by using malloc he suddenly found that he has forgot to add 2 more data.
// Now help him increase the size so that the new data fits in.
// For hint type "hint"

#include <stdio.h>
#include <stdlib.h>
int main(Q{
    int *ptr, i, old, new;
printf("Enter size: ");
scanf("%d", &old);
ptr = (int*)malloc(old * sizeof(int));
printf("Addresses of previously allocated memory: ");
for (i = 0; i < old; ++i)
    printf("%u\n", ptr + i);
printf("\nEnter the new size: ");

scanf("%d", &new);


// rellocate the memory
ptr = ......................

for (i = 0; i < new; ++i)
{

    printf("%u\n", ptr + i);
    free(ptr);
    return 0;

}

// I AM NOT DONE!