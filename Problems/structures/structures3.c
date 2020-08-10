// Now that he has declared house captains' names. He wants to display the name and class of school captain.
// Help him do it by passing the structure to show function.
// For hints type "hint"

#include <stdio.h>
struct schoolcaptain {
   
   // declare structure
};

// function prototype
void show(.................);

int main() {
   struct schoolcaptain s1;

   

   // read string input from the user 
   
   scanf("%[^\n]%*c", s1.name);

   printf("Enter class: ");
   scanf("%d", &s1.class);

   show(s1); // passing struct as an argument

   return 0;
}

void show(struct schoolcaptain s) {
   printf("\n School Captain \n");
   printf("Name: %s", s.name);
   printf("\nclass: %d", s.class);
}

// I AM NOT DONE!