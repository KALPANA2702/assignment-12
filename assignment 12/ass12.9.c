//Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void DtoB(int n);
void DtoB(int n)
{
    if(n>=1)
     {
      DtoB(n/8);
     printf("%d",n%8);
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