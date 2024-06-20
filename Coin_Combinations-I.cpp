#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M=1e9+7;
ll dp[1000001];
int main()
{
  ll n,x;
  cin>>n>>x;
  dp[0]=1;
  ll a[n];
  for(ll i=0;i<n;i++){cin>>a[i];}
 
  for(ll i=1;i<=x;i++)
  {
  ll ways=0;
  for(ll j=0;j<n;j++)
  {
     if(i-a[j]>=0){ways+=(dp[i-a[j]])%M;}   
  }
  dp[i]=ways;
  }
 
  cout<<(dp[x]%M)<<endl;
 
 // for(ll i=0;i<=1000000;i++){dp[i]=0;}
 
}