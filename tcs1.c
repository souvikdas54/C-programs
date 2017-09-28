#include <stdio.h>

int main(void) 
{
    int i,n,j;
    static int k=2;
    printf("\nEnter the number of steps of logical pyramid you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    for(j=0;j<i;j++){
	        
	printf("%10.5d",(k*(2*k-1)));
	k=k+2;
	        
	    }
	    printf("\n");
	}
	return 0;
}
 
