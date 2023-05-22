#include<stdio.h>
void odd(int n);
void odd(int n )
{
    if(n>=0)
    {
    odd(n-1);
     printf("%d \n",2*n+1);
    }
}
int main()
{
    odd(5);
    return 0;
}