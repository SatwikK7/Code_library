#include <iostream>
using namespace std;

int main() {
   int t;
cin>>t;
while(t--)
{
    int n,a,b,ans;
    cin>>n>>a>>b;
    if(n%2==0)
    {
        ans= a*(n/2) + b*(n/2);
    }
    else{
         ans= a*(n/2) + b*(n/2)+b;
    }
    cout<<ans<<endl;
    

}
}