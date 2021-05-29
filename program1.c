#WAP to find divisor or factorial of a given number

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int f,n,i,j;
    printf("\n Menu \n 1.factorial: \n 2.divisor: \n Enter your choice: ");
    scanf("%d",&f);
    printf("\n Enter the number: ");
    scanf("%d", &n);
    switch(f)
    {
        case 1:
            if(n<=0)
            n = 1;
            for (i = n; i>1; i--)
            {
                n*=i-1;
            }
            printf("\n The factorial is: %d", n);
            break;
        case 2:
            printf("\n The divisors are: ");
            for (j =1; j/2<=n; j++)
            if (n%j ==0)
            printf("%d , ", j);
            break;
    }           
}
