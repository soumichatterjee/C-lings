// Nahar received a genotype in her laboratory. She wants to find if the person is haemopilic.
// If one has Xh chormosome then he/she is said to be haemophilic or a carrier.
// The genotype she received is XX-XXh-XhY-XY
// For hint type "hint"

#include <stdio.h>
#include <string.h>


int main()
{
    char genotype[50] = "XX  XXh  XhY  XY";
    char chromosome[4] = "Xh";
    int i, j, found;
    int genoLen, chromoLen;


    genoLen  = strlen(genotype);  // Find length of string
    chromoLen = strlen(chromosome); // Find length of word


    // Run a loop from starting index of genotype to
    // length of genotype-chromosome length
    
    for(..................)
    {
        // Match word at current position
        found = 1;
        for(.................)
        {
            // If word is not matched
            if(....................)
            {
                found = 0;
                break;
            }
        }

        // If word have been found then print found message
        if(found == 1)
        {
            printf("'%s' present, offspring is haemopilic or carrier\n", chromosome);
        }
    }

    return 0;
}