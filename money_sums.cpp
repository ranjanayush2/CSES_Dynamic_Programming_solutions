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
ll dp[101][100002];
vector<bool> isprime(N, 1);
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;
  cin>>n;
  ll a[n];
  take(a,n);
  dp[0][a[0]]=1;
  dp[0][0]=0;
  f(n){dp[i][0]=1;}
  for(ll i=1;i<n;i++)
  {
    for(ll j=1;j<=100000;j++)
    {
     if(j-a[i]>=0)
     {dp[i][j]=(dp[i-1][j-a[i]]) | (dp[i-1][j]);}
     else
     {
      dp[i][j]=dp[i-1][j];
     }
    }
  }
  set<ll> s;
  f(n)
  {
    for(ll j=1;j<=100000;j++)
    {if(dp[i][j]==1){s.insert(j);}}
  }
  cout<<s.size()<<e;
  for(auto i:s){cout<<i<<" ";}
  cout<<e;
    
}
