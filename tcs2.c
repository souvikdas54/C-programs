# include<stdio.h>
# include<math.h>
# include<stdlib.h>
int prime(int ele);
int logicc(int pos,int ele);
int a[100];
int s=0;


int prime(int ele)
{
    int k,i;
    for(k=2;i<sqrt(ele);k++)
    {
        if(ele%k==0)
        return 0;
    }
    return 1;
}
int logicc(int pos,int ele)
(
    int i;
	int s=a[pos]+2;
    for(i=pos-1;i>=1;i--)
    {
        if(ele>s+a[i]||ele==s+a[i])
        {
        s=s+a[i];
        }
        if(ele==s)
        {
        return 1;
        
        }
    }
    return 0;
}

int main()
{
    int n,i,k=0,j,v;
    printf("enter no of elements\n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(prime(i))
        {
        a[k]=i;
        k++;
        }
    }
    for(i=0;i<k;i++)
    printf("%d\t",a[i]);
    for(i=1;i<k;i++)
     for(j=i-1;j>=0;j++)
    {
        v=logicc(j,a[i]);
        if(v==1)
        {
        printf("%d\t",a[i]);
        break;
        }
    }
    return 0;

}
