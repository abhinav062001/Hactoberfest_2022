#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k,i,n,l,m;
	string s;
	cin>>t;
	for(k=1;k<=t;k++)
	{
	    cin>>n;
	    cin>>s;
	    m=n;
	    l=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            l=i;
	            break;
	        }
	    }
	    for(i=l+1;i<n;i++)
	    {
	        if(s[i]=='0')
	        {
	            m=i;
	            break;
	        }
	    }
	    cout<<m-l<<endl;
	}
	return 0;
}
