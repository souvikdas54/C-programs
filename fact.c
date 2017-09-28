#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i,fact=1;
	printf("**************************************************************");
	printf("\nEnter the number you want to find factorial\n");
	printf("**************************************************************\n");
	scanf("%d",&a);
	if(a==0)
	{
		fact=1;
	}else
	{
	for(i=1;i<=a;i++)
		{
			fact=fact*i;
		}
	}
	printf("\n\nThe required factorial is: %d\n",fact);
}
