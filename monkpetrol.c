/*Journey to Coderland will be through N checkpoints. Checkpoints are numbered from 0 to N-1. At the start of the journey Monk is present at the checkpoint 0.
 Also checkpoint N-1 will lead to Coderland. Each checkpoint has a petrol pump which can be used to fill petrol in the car. 
 Now cost of petrol per litre at different checkpoints is given by array 
C which has 0-based indexing where 
C[i] is the cost per litre of petrol at the 
ith checkpoint. Note that there is an infinite amount of supply at each checkpoint and car tank is also of infinite capacity. Now another array 
L is given which has 0-based indexing where L[i] denotes the amount of petrol in litres required to reach the [i+1]th checkpoint from the 
ith checkpoint. Note that the extra petrol remaining in the tank does not vanishes after reaching a checkpoint. Also, Monk should have atleast 
L[i] litres of petrol at each checkpoint in order to reach the next checkpoint.

Can you help Monk estimate the minimum cost required in order complete the journey?*/

#include <stdio.h>
 
int main()
{
   int n,t,i;
   long min,c;
   scanf("%d",&t);
   while(t-->0){
       scanf("%d",&n);
       c=0;
       long a[n],b[n];
       for(i=0;i<n;i++)
       scanf("%ld ",&a[i]);
        min=a[0];
        for(i=0;i<n;i++)
        scanf("%ld ",&b[i]);
        for(i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
        c+=min*b[i];
        }
        printf("%ld\n",c);
   }
    return 0;
}
