#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_1 (i,j,n) for(int i=j;i<n;i++)
typedef long long ll;
typedef long l;
const ll l_INF = 1010101010101010;
const int INF = 1010101010;
const int dx[4] = {-1,0,1,0};
const int dy[4] = {0,-1,0,1};
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

int main(){
  int n; cin>>n;
  vector<ll> a(n),b(n);
  rep(i,n) cin>>a[i]>>b[i];
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  ll m_a=a[n/2],m_b=b[n/2];
  ll ans=0;
  rep(i,n){
    ans+=abs(m_a-a[i])+b[i]-a[i]+abs(m_b-b[i]);
  }
  cout<<ans<<endl;
}
