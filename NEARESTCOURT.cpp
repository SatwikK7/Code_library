#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int z=(x+y)/2;
	    int k=min(z-x,z-y);
	    cout<<-k<<endl;
	    
	}
	return 0;
}
