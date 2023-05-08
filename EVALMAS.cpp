#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    if(b>a+1 || b<1-a)
    {
        cout<<"-1"<<endl;
    }
    else if(b==a+1)
    {
        for(int i=0;i<a;i++)
        {
            cout<<"+";
        }
        cout<<endl;
    }
    else if(b==1-a)
    {
        for(int i=0;i<a;i++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
    else if(b==1)
    {
        for(int i=0;i<a;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    else {
        if(b>0)
        {
            for(int i=0;i<b-1;i++)
            {
                cout<<"+";
            }
            for(int i=b-1;i<a;i++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            {
            for(int i=0;i<1-b;i++)
            {
                cout<<"-";
            }
            for(int i=1-b;i<a;i++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        }
    }
    
}
}
