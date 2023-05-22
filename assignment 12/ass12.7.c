#include<stdio.h>
void square(int n);
void square(int n )
{
    if(n>=1)
    {
         square(n-1);
     printf("%d \n",n*n);
    }
}
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    square(n);
    return 0;
}