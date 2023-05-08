#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int sum=0;
	    while(x--){
	        int temp;
	        cin>>temp;
	        sum=sum+temp;
	    }
	    if(sum%2==0)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
