#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,val,k,n,*a;
	printf("\nEnter the size of array\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
		a[i]=val;
	}
	bubblesort(a,n);
	printf("Sorted array\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}	
	printf("\nEnter the number you want to search\n");
	scanf("%d",&k);
	int target=binarySearch(a,n,k);
	if(target!=-1)
	{
		printf("Number is found and in the position\n:%d",target+1);
	}else{
		printf("\nNumber not found");
	}
}
void bubblesort(int arr[],int num) 
{
	int i,j,temp;
	for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int binarySearch(int arr[],int size, int item)
{
	int left, right, middle;
	left = 0;
	right = size-1;

	while(left <= right)
	{
		middle = ((left + right)/2);
	
		if(item == arr[middle])
		{
			return(middle);
		}

		if(item > arr[middle])
		{
			left = middle+1;
		}
		else
		{		
			right = middle-1;
		}
	}
return -1;
}


