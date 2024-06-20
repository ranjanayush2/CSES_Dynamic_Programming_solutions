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
  ll n,x;
  cin>>n>>x;
  ll a[n];
  take(a,n);
 
  ll dp[x+1];
  dp[0]=0;
  for(ll i=1;i<=x;i++)
  { dp[i]=1e18;
    for(ll j=0;j<n;j++)
    {  //dp[i]=1e18;
       if(i-a[j]>=0)
       {
        dp[i]=min(dp[i],dp[i-a[j]]+1);
       }
    }
  }
  if(dp[x]==1e18){cout<<-1<<e;}
  else
  cout<<dp[x]<<e;
}