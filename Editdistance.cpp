#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    int dp[l1+1][l2+1];
    for(int i=0;i<=l1;i++)
    {
        dp[i][0]=i;
    }
    for(int j=0;j<=l2;j++)
    {
        dp[0][j]=j;
    }
    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                int t=min(dp[i-1][j],dp[i][j-1]);
                dp[i][j]=min(t,dp[i-1][j-1])+1;
            }
        }
    }
      for(int i=0;i<=l1;i++)
    {
        for(int j=0;j<=l2;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<dp[l1][l2];
    }
