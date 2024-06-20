#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
long long dp[5001][5001];
int main()
{
 string s1,s2;
 cin>>s1>>s2;
 ll n1=s1.size();
 ll n2=s2.size();
 
 //dp[i][j] denotes the number of minimum op required to make the string 
 // upto ith and jth index equal.
 
 bool f1=0;
 
 for(ll i=0;i<n2;i++)
 {  if(s2[i]==s1[0]){f1=1;}
    dp[0][i]=i+1;
    if(f1==1){dp[0][i]--;}
 }
 
 f1=0;
 
 for(ll i=0;i<n1;i++)
 {  if(s1[i]==s2[0]){f1=1;}
    dp[i][0]=i+1;
    if(f1==1){dp[i][0]--;}
 }
 
 for(ll i=1;i<n1;i++)
 {
    for(ll j=1;j<n2;j++)
    {   dp[i][j]=1e17;
        if(s1[i]==s2[j])
        {
         dp[i][j]=dp[i-1][j-1];
        }
        else
        {
         ll mn=min(dp[i-1][j],dp[i][j-1]);
         mn=min(mn,dp[i-1][j-1]);
         dp[i][j]=min(dp[i][j],mn+1);
        }
    }
 }
 
 cout<<dp[n1-1][n2-1]<<endl;
 
 
 
 
 
}
