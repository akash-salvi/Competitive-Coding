#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t,i,j,k,ts;
	cin>>t;
	while(t--)
	{
	    cin>>ts;
	    k=0;
	    if(ts%2==0)
	    {
	        while(ts%2==0)
	        {
	            ts=ts/2;
	        }
	    }
        ts=ts-1;
        cout<<ts/2<<endl;
	}
	return 0;
}
