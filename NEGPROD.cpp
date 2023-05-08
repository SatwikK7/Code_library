#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a[3];
	    cin>>a[0]>>a[1]>>a[2];
	    int count1=0,count2=0;
	    for(int i=0;i<3;i++)
	    {
	        if(a[i]>0)
	        {
	            count1++;
	        }
	        else if(a[i]<0)
	        {
	            count2++;
	        }
	    }
	    if(count1>=1 && count2>=1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	
}
