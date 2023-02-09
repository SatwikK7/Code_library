#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int LCS(string str1,string str2)
{
    int l1 = str1.length();
    int l2 = str2.length();
    int dp[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        dp[i][0]=0;
    }
    for(int j=0;j<=l2;j++)
    {
        dp[0][j]=0;
    }
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            if(str1[i-1]==str2[j-1])
            dp[i][j] = dp[i-1][j-1] + 1;

            else
            dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }

    return dp[l1][l2];
}

int main()
{
  string str1,str2;
  cin>>str1>>str2;
  int longest_match = LCS(str1,str2);
  cout<<longest_match<<endl;

}
