#include<bits/stdc++.h>
using namespace std;
#define MAX 999999;


int number_of_setBits(int mask)
{
    int cou = 0;
    while(mask)
    {
       cou=cou+(mask & 1);
       mask>>=1;
    }
    return cou;
}

bool check_bitSet(int mask,int j)
{
    int temp = 1;
    temp<<=j;
    if(temp & mask)
        return false;
    else
        return true;
}


main()
{
    int N;
    int x;
    cout<<"enter the number of jobs(person)"<<endl;
    cin>>N;
    int val = pow(2,N);
    int matrix[N][N];
    cout<<"enter the cost in format such that rows indicate person and columns indicate jobs "<<endl;
    for(int i=0;i<N;i++)
    {
       for(int j=0;j<N;j++)
            cin>>matrix[i][j];
    }
    int dp[val];
    for(int i=1;i<val;i++)
    {
        dp[i]=MAX;
    }
    dp[0]=0;
    for(int mask=0;mask<val;mask++)
    {
        x=number_of_setBits(mask);
        for(int j=0;j<N;j++)
        {
            if(check_bitSet(mask,j))
            {
                dp[(mask ) | (1 << j)] = min(dp[(mask) | (1<<j)], dp[mask] + matrix[x][j]);
            }
        }
    }
    cout<<dp[val-1]<<endl;
}

