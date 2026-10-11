#include<stdio.h>
int main()
{
    int n,i;
    for(i=1;i<=100;i++)
    {
	printf("%d",i);
    if(i%3==0 && i%5==0)
    {
    	printf("FizzBuzz");
	}
	else if(i%3==0)
	{
		printf("Fizz");
	}
	else if(n%5==0)
	{
		printf("Buzz");
	}
	printf("\n");
}
    return 0;
}
