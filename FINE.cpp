#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int speed;
	    cin>>speed;
	    if(speed>70 && speed<=100)
	    {
	        cout<<"500"<<endl;
	    }
	    else if(speed<=70)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<"2000"<<endl;
	    }
	}
	
}
