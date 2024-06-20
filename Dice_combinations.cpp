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
// _______________________________________________________
// Ascii value
// A=65,Z=90,a=97,z=122
// subtract 32 from lowercase to change it into uppercase
// _______________________________________________________
// Techniques:
// Divide into cases, brute force, pattern finding(when brain gets hang).
// Sort, greedy, binary search, two pointer.
/* See the constraint and if it is small check for every
   value of possible answer. */
// THINK ABOUT RECURSION ALSO,YOU NEVER THINK THAT :(
//_______________________________________________________
// vector<vector<ll>> a(n, vector<ll>(m, 0));
// vector<vector<ll>> v(n+1); (each vector has size=0);
// bitset <32> bits(n);
void dfs(ll vertex, vector<ll> &vs, vector<ll> v[], vector<ll> &sm)
{
  // action on vertex after entering the vertex
  vs[vertex] = true;
  for (int child : v[vertex])
  {
    // action on child before entering child node.
    if (vs[child] == 1)
    {
      continue;
    }
    dfs(child, vs, v, sm);
    // action on child after exiting the child node.
    sm[vertex] += sm[child];
  }
  // action on vertex before exiting the vertex.
  sm[vertex] += vertex;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  isprime[0] = isprime[1] = false;
  for (ll i = 2; i < N; i++)
  {
    if (isprime[i] == true)
    {
      for (ll j = 2 * i; j <= N; j = i + j)
      {
        isprime[j] = false;
      }
    }
  }
 
  
  ll n;
  cin>>n;
  ll dp[n+1];
  f(n+1){dp[i]=0;}
  dp[0]=1;
  dp[1]=1;
  dp[2]=2;
  dp[3]=4;
  for(ll i=4;i<=n;i++)
  {
    for(ll j=1;j<=min(i,6ll);j++)
    {
      dp[i]=(dp[i]+dp[i-j])%mod;
    }
  }
  cout<<dp[n]<<e;
}
