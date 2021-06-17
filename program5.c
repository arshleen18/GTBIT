#Write a menu driven program for matrices operation on one or two matrices
/*Addition of two matrices
Subtraction of two matrices
Finding upper and lower triangular matrices
Transpose of matrix
Product of two matrices*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int f, r, c, rows, columns, a[10][10], b[10][10], Addition[10][10], Subtraction[10][10], matrix[10][10], transpose_a[10][10], transpose_b[10][10], product[10][10];
	printf("\n Menu: \n 1.Addition of 2 matrices \n 2.Subtraction of 2 matrices \n 3.Upper and Lower triangular matrix \n 4.Transpose of a matrix \n 5.Product of 2 matrices \n Enter your choice: ");
	scanf("%d", &f);
	switch (f)
	{
		case 1:
			printf("\n Enter Number of rows and columns: ");
			scanf("%d %d", &r, &c);
		
			printf("\n Enter the First Matrix Elements\n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &a[rows][columns]);
				}
			}
		
			printf("\n Enter the Second Matrix Elements\n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &b[rows][columns]);
				}
			}
		
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					Addition[rows][columns] = a[rows][columns] + b[rows][columns];    
				}
			}
		
			printf("\n The Sum of Two Matrix: \n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					printf("%d \t", Addition[rows][columns]);
				}
				printf("\n");
			}
			break;

		case 2:
			printf("\n Enter Number of rows and columns: ");
			scanf("%d %d", &r, &c);
		
			printf("\n Enter the First Matrix Elements\n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &a[rows][columns]);
				}
			}
		
			printf("\n Enter the Second Matrix Elements\n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &b[rows][columns]);
				}
			}
		
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					Subtraction[rows][columns] = a[rows][columns] - b[rows][columns];    
				}
			}
		
			printf("\n The Sum of Two Matrix: \n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					printf("%d \t", Subtraction[rows][columns]);
				}
				printf("\n");
			}
			break;

		case 3:
			printf("\n Enter Number of rows and columns: ");
			scanf("%d %d", &r, &c);
			printf("\n Enter the  Elements for the Matrix \n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &matrix[rows][columns]);
				}
			}
			printf("\n The Upper Triangular Matrix is: \n");
			for(rows = 0; rows < r; rows++)
			{
				printf("\n");
				for(columns = 0; columns < c; columns++)
				{
					if (rows > columns)
					{
						printf("0");
						printf("\t");
					}
					else
					{
						printf("%d \t", matrix[rows][columns]);
					}	
				}
			}
			printf("\n The Lower Triangular Matrix is: \n");
			for(rows = 0; rows < r; rows++)
			{
				printf("\n");
				for(columns = 0; columns < c; columns++)
				{
					if(rows >= columns)
					{
						printf("%d \t ", matrix[rows][columns]);
					}
					else
					{
						printf("0");
						printf("\t");
					}	
				}
			}
			break;
		case 4:
			printf("\n Enter Number of rows and columns: ");
			scanf("%d %d", &r, &c);
			printf("\n Enter the  Elements for the Matrix \n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &transpose_a[rows][columns]);
				}
			}
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					transpose_b[columns][rows] = transpose_a[rows][columns];
				}
			}
			printf("\n The Transpose matrix: \n");
			for (rows = 0; rows < c; rows++)
			{
				for (columns = 0; columns < r; columns++)
				{
					printf("%d \t ", transpose_b[rows][columns]);
				}
				printf("\n");
			}
			break;
		case 5:
			printf("\n Enter Number of rows and columns: ");
			scanf("%d %d", &r, &c);
		
			printf("\n Enter the First Matrix Elements\n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &a[rows][columns]);
				}
			}
		
			printf("\n Enter the Second Matrix Elements\n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					scanf("%d", &b[rows][columns]);
				}
			}
		
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					product[rows][columns] = a[rows][columns] * b[rows][columns];    
				}
			}
		
			printf("\n The product of Two Matrix: \n");
			for(rows = 0; rows < r; rows++)
			{
				for(columns = 0; columns < c; columns++)
				{
					printf("%d \t", product[rows][columns]);
				}
				printf("\n");
			}
			break;

	}
}
