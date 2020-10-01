#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,j;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>s;
	    j=0;
	    for(i=0;i<s.length();i++)
	    {
	        if((s[i]=='x' and s[i+1]=='y') or (s[i]=='y' and s[i+1]=='x'))
	        {
	            j++;
	            i++;
	        }
	    }
	    cout<<j<<endl;
	}
	return 0;
}
