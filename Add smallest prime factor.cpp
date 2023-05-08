#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int t;
    cin>>t;
    while(t--){
        int timer=0;
        int x,y;
        cin>>x>>y;
        while(y>x){
            
            if( x%2 ==0){
                int diff=y-x;
                diff = ceil(diff/2.0);
                timer = timer + diff;
                break;
                
            }
            else if(x%3==0){
                x=x+3;
            }
            else if(x%5==0){
                x=x+5;
            }
            else if(x%7==0){
                x=x+7;
            }
            else{
                int val = sqrt(x);
                x=x+val;
            }
            timer++;
        }
        cout<<timer<<endl;
    }
	// your code goes here
	return 0;
}
