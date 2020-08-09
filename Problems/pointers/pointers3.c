// Kohli wants to print the name of his team members.
// Help him do it using pointers.
// For hint type "hint"
#include<stdio.h>

int main()
{
    char players[20], **w;
    int i, n;
    scanf("%d".&n);
    w = (char)malloc(n * sizeof(char *));
    for (...........)
    {
        scanf("%s", players);
        w[i] = (char *)malloc((strlen(players)+1)*sizeof(char));
        strcpy(w[i], players);
    }
    for (i=0; i<n; i++)

        printf("w[%d] = %s \n", i, w[i]);
    return 0;
}

// I AM NOT DONE!