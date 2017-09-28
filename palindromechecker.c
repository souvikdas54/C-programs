#include<stdio.h>
int main()
{
	int n,reversedInteger=0,remainder,originalInteger;
	printf("\nEnter an integer\n");
	scanf("%d",&n);
	originalInteger=n;
	while(n!=0)
	{
		remainder=n%10;
		reverseInteger=reversedInteger*1-+remainder;
		n/=10;
	}
	if(originalInteger==reversedInteger)
		printf("%d is a palindrome",originalInteger);
	else
		printf("%d is not a palindrome.",originalInteger);
		
	return 0;
}
