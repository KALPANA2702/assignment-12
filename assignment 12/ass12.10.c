#include<stdio.h>
void reverse(int n);
void reverse(int n)
{
    if (n < 10) 
    {
        printf("%d", n);
    } else {
        printf("%d", n % 10);
        reverse(n / 10);
    }
}
int main()
{
    int n;
    printf("enter the digit");
    scanf("%d",&n);
    reverse(n);
    return 0;
}