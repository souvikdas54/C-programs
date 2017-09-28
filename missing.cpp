//Missing number in array

#include<iostream>
#include<cstring>
using namespace std;
int main()
 {
	//code
	int t,i,temp,N;
	bool *map;
	cin>>t;
	while(t--)
	{
	    cin>>N;
	    map = new bool[N];
	    for(i=0;i<N;i++)
	        map[i] = 0;
	    for(i=1;i<N;i++)
	    {   
	        cin>>temp;
	        map[temp]=1;
	    }
	    for(i=1;i<N;i++)
	        if(map[i]==0)
	            cout<<i<<endl;
	    delete [] map;
	}
	return 0;
}

