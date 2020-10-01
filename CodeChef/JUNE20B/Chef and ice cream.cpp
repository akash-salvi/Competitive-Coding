#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[3]={0},t,n,i,j;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int b[n],flag=0;
	    int a[3]={0};
	    for(i=0;i<n;cin>>b[i],i++);
        for(i=0;i<n;i++)
        {
            if(b[i]==5)
            {
                a[0]++;
            }
            if(b[i]==10)
            {
                if(a[0]==0)
                {
                    flag=1;
                    break;
                }
                else
                {
                    a[0]--;
                    a[1]++;
                }
            }
            if(b[i]==15)
            {
                if(a[1]!=0)
                {
                    a[1]--;
                    a[2]++;
                }
                else if(a[0]>=2)
                {
                    a[0]-=2;
                    a[2]++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
	}
	return 0;
}
