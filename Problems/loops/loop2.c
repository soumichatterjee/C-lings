// A student wasn't satisfied with his marks and reviewed his paper.
// In that he found a strange fashion that for all his marks other than the last one has got incremented in a specific manner.
// The marks of even places got incremented by 4 whereas marks at odd places got incremented by 3.
// Use pointer to access the marks within the array and print the updated marks.
// for hint type "hint"

#include <stdio.h>
int main()
{
    int marks[5] = {100, 88, 86, 97, 90};
    int *ptr = marks;
    while (.........) //condition to run it till second last element using pointer
    {
        if (........) //condition to determine even or odd position

            /* code */

            else

                /* code */

                ptr = ptr + 1;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("the updated marks are %d", marks[i]);
    }
    return 0;
}
//I AM NOT DONE!