#include <stdio.h>
#include<stdlib.h>
void main(int argc,char *argv[])
{
	/*if(argc>2 || argc==1 || )
	{
		exit(0);
	}*/
    int n=atoi(argv[1]) ,i;
    int factorial=1;
	
    // show error if the user enters a negative integer
    if (n < 0)
    {
        exit(0);
	}

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("%d",factorial);
    }
}
