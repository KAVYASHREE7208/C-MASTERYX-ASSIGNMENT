#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("Enter a number");
    scanf("%d",&n);
    int temp=n;
    if(n==0 || n==1)
    {
    	printf("No");
    	return 0;
	}
    for(i=1;i<=n/2;i++)
    {
    	if(n%i==0)
    	{
    		sum=sum+i;
		}
	}
	if(sum==temp)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
