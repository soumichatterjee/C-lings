// Mr.Walther Flemming after finding chromosomes thought of keeping a track of the number of chromosomes he found in different organisms.
// He made an array which stores the number of chromosomes of human beings = 46, rat = 42, dog = 78, cat = 38, potato = 48, butterfly = 380 respectively.
// He by mistake forgot to enter the value of elephant's chromosome number which is 56.
// Help him to add it in the array at 5th position.
// For hint type "hint"

#include <stdio.h>

int main()
{
    int chromosomes[100];
    int i, numorganisms = 6, missingchromo, position;

    printf("Enter chromosome numbers of human beings, rat, dog, cat, potato, butterfly respectively : \n");
    for (i = 0; i < numorganisms; i++)
    {
        scanf("%d", &chromosomes[i]);
    }

    printf("Enter missing chromosome number of elephant to insert : \n");
    scanf("%d", &missingchromo);
    printf("Enter the element position : ");
    scanf("%d", &position);
    
    // arrange place for elephant's chromosome number at 5th position//
    
    for (............)
    {
        
        //shift elements to right
    
    }

    // Insert elephant chromosome number at given position and increment size of the array//
    chromosomes[position - 1] = missingchromo;
    numorganisms++;

    // Print array after inserting//

    printf("chromosome numbers of human beings, rat, dog, cat, elephant, potato, butterfly respectively : \n");
    for (............)
    {
        printf("%d\n", chromosomes[i]);
    }

    return 0;
}

//I AM NOT DONE!