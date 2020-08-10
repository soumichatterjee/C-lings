// Jessica is planning to run a campaign awaring people about the harm caused by smoking. 
// She wants to add the name of particulate and gaseous constituents of cigarette to a file named "cigcomponent"for making posters.
// Help her do that using files.
// For hints type "hint"




#include <stdio.h>

int main() 
{
	char name[50];
	int i,cig;
	printf("Number of constituents: ");
	scanf("%d",&cig);
	
	
    // code to create a file
	

	for (i=0;i<cig;++i)
	{
		printf("name of constituents: ",i+1);
		scanf("%s",name);
		fprintf(fptr,"\nName: %s \n",name);
	}
	
	fclose(fptr);
	return 0;
}

// I AM NOT DONE!