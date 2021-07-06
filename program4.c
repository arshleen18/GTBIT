/*write a recursive program to print the first m Fibonacci number*/

#include<stdio.h>
#include<conio.h>

int fibonacci(int);

int main()
{    
    int terms;

    printf("Enter terms: ");
    scanf("%d", &terms);  

	printf("Fibonacci series till %d terms\n", terms);     

    for(int n = 0; n < terms; n++)
    {
		printf("%d ", fibonacci(n));
    }

    return 0; 
}

int fibonacci(int num)
{    
    if(num == 0 || num == 1)
    {
        return num;
    }

    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
}
