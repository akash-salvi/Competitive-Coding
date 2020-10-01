#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,i,j,sum,t;
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    int a[n];
	    sum=0;
	    for(i=0;i<n;cin>>a[i],i++);
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>k)
	        {
	            sum+=a[i]-k;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
