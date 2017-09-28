#include <stdio.h>

int main()
{
	int t,n,x,i,j,s=0,flag=0;
	scanf("%d",&t);
	scanf("%d %d",&n,&x);
	int a[n];
	while(t>0)
	{
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(i!=j)
	            {
	                 s=a[i]+a[j];
	            }
                 if(s==x)
                 {
                    flag=1;
                    break;
                 }
	        }
	    }
	    if(flag==1)
        printf("Yes \n");
        else
        printf("No \n");
        t--;
        flag=0;
	}

	return 0;
}
