#include<stdio.h>
int main()
{
    int n;
    int d;
    int sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        d=n%10;
        sum+=(d*d*d);
        n=n/10;
    }
    if(sum==temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
    return 0;
}
