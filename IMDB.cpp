#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    pair<int,int>s;
	    cin>>n>>x;
	    int m=0;
	    for(int i=0;i<n;i++)
	    {
	       cin>>s.first;
	       cin>>s.second;
	       if(s.first<=x)
	           {
	               m=max(m,s.second);
	           }

	    }
	   cout<<m<<endl;
	       
	   }
	}
	

