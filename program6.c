/*Write a program to perform the following operations without using string defined functions
1. to find the length of the string
2. To concatenate two string
3. To find the reverse of a string
4. To copy one string to another string*/


#include<stdio.h>
#include<string.h>
 
int main() 
{
   char str[100], str1[100], str2[100], copystr[100];
   int f, i, j, length;
   printf("\n Menu \n 1.To find the length of the string \n 2.To concatenate two string \n 3.To find reverse of a string \n 4.To copy one string to another string \n Enter your choice: ");
   scanf("%d", &f);
   switch (f)
   {
	    case 1:
		printf("\nEnter the String\n");
		scanf("%s", str);
	
		length = 0;

		for (i=0; str[i]!='\0'; i++)
		{
			length++;
		}  
	
		printf("\nLength of the String is : %d", length);
		break;


		case 2:
		printf("\nEnter the First String : ");
		scanf("%s", str1);
		
		printf("\nEnter the Second String : ");
		scanf("%s", str2);

		for (i = 0; str1[i]!='\0'; i++);

		for (j = 0; str2[j]!='\0'; j++, i++)
		{
			str1[i] = str2[j];
		}
		str1[i] = '\0';

		printf("\nString after the Concatenation = %s", str1);
		break;


		case 3:
		printf("\nEnter the String : ");
		scanf("%s", str);

		length = strlen(str);
		printf("\nString after Reversing : ");

		for (i = length - 1; i >= 0; i--)
		{
			printf("%c", str[i]);
		}
		break;


		case 4:
		printf("\nEnter the String : ");
		scanf("%s", str);

		for (i = 0; str[i]!='\0'; i++)
		{
			copystr[i] = str[i];
		}
		copystr[i] = '\0';

		printf("\nString copied into CopyStr = %s", copystr);
		break;
	}
  
}
