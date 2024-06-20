#include<bits/stdc++.h>
using namespace std;
int dp[1001][100001];
int main()
{
int n,x;
cin>>n>>x;
int pr[n];
int pg[n];
for(int i=0;i<n;i++)cin>>pr[i];
for(int i=0;i<n;i++)cin>>pg[i];
 
//dp[i][j] denotes the maximum pages which we can buy
//upto index i by spending price j.
 
for(int j=pr[0];j<=100000;j++){dp[0][j]=pg[0];}
for(int i=0;i<n;i++){dp[i][0]=0;}
for(int i=1;i<n;i++)
{
    for(int j=1;j<=100000;j++)
    {
        dp[i][j]=dp[i-1][j];
        if(j-pr[i]>=0)
        {
            dp[i][j]=max(dp[i][j],dp[i-1][j-pr[i]]+pg[i]);
        }
    }
}
 
cout<<dp[n-1][x]<<endl;
 
 
for(int i=0;i<=1000;i++)
{
    for(int j=0;j<=100000;j++){dp[i][j]=0;}
}
 
 
 
 
}
