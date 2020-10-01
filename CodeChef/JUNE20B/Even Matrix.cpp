#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j,k,p;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    p=1;
	    for(i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
    	        for(j=0;j<n;j++)
    	        {
    	            cout<<p<<" ";
    	            p++;
    	        }
    	        p=p+n-1;
	        }
	        else
	        {
	            
	            for(j=0;j<n;j++)
	            {
	                cout<<p<<" ";
	                p--;
	            }
	            p=p+n+1;
	        }
	        cout<<endl;
	    }
	}
	return 0;
}
