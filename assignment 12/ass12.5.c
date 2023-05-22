#include<stdio.h>
void even(int n);
void even(int n )
{
    if(n>=1)
    {
         even(n-1);
     printf("%d \n",2*n);
    }
}
int main()
{
    even(5);
    return 0;
}