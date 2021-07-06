/*Write a recursive program for the tower of Hanoi problem*/

#include<stdio.h>
void TOH(int n, int A, int B, int C ) 
{
    if (n>0) 
    {
        TOH(n-1, A, C, B);
        printf("\nmove disc %d from rod %d to rod %d", n, A, C);
        TOH(n-1, B, A, C);
    }
}
int main() 
{
    int n = 3;
    TOH(n,1,2,3);
}
