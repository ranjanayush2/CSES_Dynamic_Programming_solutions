#include <bits/stdc++.h>
#define f(n) for (ll i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define sortall(v) sort(all(v))
#define fitr(it, v) for (auto it = v.begin(); it != v.end(); it++)
#define maxa(a, n) *max_element(a, a + n)
#define mina(a, n) *min_element(a, a + n)
#define PI 3.141592653589793238462
#define maxv(v) *max_element(all(v))
#define minv(v) *min_element(all(v))
#define ha "YES" << endl
#define na "NO" << endl
#define pb push_back
#define ff first
#define ss second
#define e endl
#define take(a, n) \
  f(n) { cin >> a[i]; }
typedef long long ll;
#define vl vector<long long>
typedef long long ll;
using namespace std;
const int N = 1000;
const int mod=1000000007;
vector<bool> isprime(N, 1);
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  char a[n][n];
  f(n){for(ll j=0;j<n;j++){cin>>a[i][j];}}
  ll dp[n][n];
  if(a[0][0]=='.'){dp[0][0]=1;}
  else{dp[0][0]=0;}
  for(ll i=1;i<n;i++){if(a[0][i]=='.'){dp[0][i]=dp[0][i-1];}else{dp[0][i]=0;}}
  for(ll i=1;i<n;i++)
  {
    if(a[i][0]=='.'){dp[i][0]=dp[i-1][0];}
    else{dp[i][0]=0;}
  }
  for(ll i=1;i<n;i++)
  {
    for(ll j=1;j<n;j++)
    {
      if(a[i][j]=='*'){dp[i][j]=0;}
      else{dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;}
    }
  }
  cout<<dp[n-1][n-1]<<e;
}