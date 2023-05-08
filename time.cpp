#include<iostream>

using namespace std;

string timeConversion(string s) {
    string str="" ;
    if(s[9]=='P')
    {
        int temp = 0;
      temp=s[0]*10+s[1];
      cout<<temp;

    temp=temp+12;
    string str = to_string (temp);

    }
    for(int i=2;i<8;i++)
    {
        str[i]=s[i];
    }
    return str;

}
int main()
{
    string s="12:30:02PM";
    string y= timeConversion(s);

    cout<<y;

}
