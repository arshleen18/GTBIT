/*Write a C program to copy contents of one file to another file*/

#include <stdio.h>
#include <stdlib.h> // For exit()

int main()
{
	FILE *fptr1, *fptr2;
	char c;

	// Open one file for reading
	fptr1 = fopen("1.txt.txt", "r");
	if (fptr1 == NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}

	// Open another file for writing
	fptr2 = fopen("2.txt.txt", "w");
	if (fptr2 == NULL)
	{
		printf("Cannot open file \n");
		exit(0);
	}

	// Read contents from file
	c = fgetc(fptr1);
	while (c != EOF)
	{
		fputc(c, fptr2);
		c = fgetc(fptr1);
	}

	printf("\nContents copied");

	fclose(fptr1);
	fclose(fptr2);
}
