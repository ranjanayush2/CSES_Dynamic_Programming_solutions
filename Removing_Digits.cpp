#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
 ll n;
 cin>>n;
 ll dp[n+1];
 for(int i=0;i<=n;i++)dp[i]=0;
 dp[1]=1;
 
 for(ll i=2;i<=n;i++)
 {
    string s=to_string(i);
    vector<ll> digits;
    for(auto i : s){digits.push_back(i-'0');} 
    dp[i]=1e9;
    for(auto digit : digits)
    {   
        if(i-digit>=0)
        {
         dp[i]=min(dp[i-digit]+1,dp[i]);
        }
    }
 
 }
 cout<<dp[n]<<endl;
}