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
 
vector<bool> isprime(N,1);
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  //First approach is using Dynamic programming
  // DP is of time complexity o(n*n)
  //second more optimized approach is using "Binary search"
 
  // DP approach will give TLE bcz n is of the order of 10^5
 
  // Hence we will use "Binary search"
 int n; //size of the array
 cin>>n; 
 int a[n];
 for(int i=0;i<n;i++){cin>>a[i];}
 vector<int> lis_length;
 lis_length.pb(a[0]);
 for(int i=1;i<n;i++)
 {
  if(a[i]>lis_length.back()){lis_length.pb(a[i]);}
  else{int ind=lower_bound(all(lis_length),a[i])-lis_length.begin();lis_length[ind]=a[i];}
 }
 cout<<lis_length.size()<<e;
}