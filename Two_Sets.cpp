#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll dp[501][65001];
const int mod=1e9+7;
int main()
{
 ll n;
 cin>>n;
 vector<ll> v(n,1);
 for(ll i=0;i<n;i++){v[i]=i+1;}
 ll sm=(n*(n+1))/2;
 if(sm%2!=0){cout<<0<<endl;}
 else
 {  ll tf=sm/2;
    
    for(ll i=0;i<n;i++){dp[i][0]=1;}
    dp[0][0]=1;
    dp[0][1]=1;
 
    for(ll i=1;i<n-1;i++)
    {
        for(ll j=1;j<65001;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j-v[i]>=0)
            {
                dp[i][j]=(dp[i][j]+dp[i-1][j-v[i]])%mod;
            }
 
        }
    } 
 
   cout<<((dp[n-2][tf]))%mod<<endl;
 }
 
}