// Salerio, Gratiano and Lorenzo have raised fund for la Befana. Their collection on day 1 is {425, 343, 123} Euro respectively,
// On day 2 {345,656,432} Euro respectively.
// On day 3 {534,265,453} Euro respectively.
// Write a program to find out the day of maximum collection and maximum collection by the person by using arrays.
// For hint type "hint"

#include

int main()
{
	int days, person, row, col, sum = 0, row_index = 0, column_index = 0;
	scanf(“%d %d”,&days,&person);
	int row_arr[days];
	int i, j;
	int mat[days][person];
	for(................)
		{
			for(...................)
				scanf(“%d”,&mat[i][j]);
		}

	int z = 0;

	printf(“Sum of rows is “);
	for(..........................)
		{
			sum = 0;
				for(.....................)
					{
						sum += mat[row][col];
					}
			printf(“%d “,sum);
			row_arr[z++] = sum;
		}
	int temp_row = row_arr[0];
	for(i=1;i<days;i++)
		{
			if(temp_row < row_arr[i])
				{
					temp_row = row_arr[i];
					row_index = i;
				}
}
	printf(“\n day %d has maximum sum “, row_index + 1);

	printf(“\nSum of columns is “);
	sum = 0;
	int y = 0;
	int col_arr[person];
	for (i = 0; i < person; ++i)
		

        //write code


	int temp_col = col_arr[0];
	for(i=1;i<person;i++)
		

        //write code


	printf(“\n person %d has maximum sum “, column_index + 1);
	return 0;
}

// I AM NOT DONE!
