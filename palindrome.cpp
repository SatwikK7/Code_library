
#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string num=to_string(x);
        int i=1;
        int j=sizeof(x)-1;
        //cout<<j;

        while(i!=j)
        {
            if(num[i]!=num[j])
            {
                return false;
                i++; j--;
            }
        }
        return true;

    }
};


int main()
{
    Solution s;
    s.isPalindrome(121);
}
