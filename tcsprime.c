#include <stdio.h>
void main(int argc,char *argv[])
{
	int n=atoi(argv[1]) ,i;
    int flag = 0;

    

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("prime number.",n);
    else
        printf("not a prime number.",n);
}
