#include <bits/stdc++.h>
using namespace std;

int main() {
   long	int n,k;
	cin>>n>>k;
	long int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a,a+n);
	int c=0;
	for(int i=1;i<n;i++){
	    if(a[i]-a[i-1]<=k){
	        c++;
	        i++;
	    }
	}
	cout<<c<<endl;
}
