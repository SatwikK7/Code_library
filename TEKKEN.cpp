#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   
	    int a,b,c;
	    cin>>a>>b>>c;
	    int k=b-c;
	    if(k<0)
	    {
	        k=k*-1;
	    }
	    if(a>k)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	
}
}
