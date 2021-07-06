/*WAP to find the sum of a geometric series*/

#include<stdio.h>
#include<math.h>
int main()
{
    int a, n, r;
    float sum;
    printf("\nEnter first number of a G.P series: ");
    scanf("%d", &a);
    printf("\nEnter the total number of a G.P series: ");
    scanf("%d", &n);
    printf("\nEnter the common ratio: ");
    scanf("%d", &r);
    sum = (a * (1 - pow(r,n))) / (1-r);
    printf("\nThe sum of G.p series = %.2f", sum);
    return 0;
}
