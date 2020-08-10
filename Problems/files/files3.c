// Out of curiousity Nerrisa thought of printing the number of words and characters present in "cigcomponent"
// But failed to do so. Help her to do that.
// For hints type "hint"


#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];

    char ch;
    int characters, words;


    
    printf("Enter source file path: ");
    scanf("%s", path);

    
    // open file


   
    if (file == NULL)
    {
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read privilege.\n");

        exit(EXIT_FAILURE);
    }

    
    characters = words = 0;
    while ((....................)) != EOF)
    {
        // code

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')          // count number of words and characters
            
            // code
    }

    
    if (characters > 0)
    {
        words=words+1;
       
    }

   
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
   

    
    // close file

    return 0;
}

// I AM NOT DONE!