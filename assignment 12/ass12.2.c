#include<stdio.h>
void natural(int n);
int main()
{
    natural(5);
    return 0;
}
void natural(int n)
{
    if(n>0)
    {
    printf("%d \n",n);
    natural(n-1);
    }
}