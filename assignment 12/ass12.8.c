//Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void DtoB(int n);
void DtoB(int n)
{
    if(n==1)
    printf("1");
    else
    {   DtoB(n/2);
     printf("%d",n%2);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    DtoB(n);
    return 0;
}