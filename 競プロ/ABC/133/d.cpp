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
  vi a(n); rep(i,n) cin>>a[i];
  int all_sum=0;
  rep(i,n) all_sum+=a[i];
  rep(i,n){
    int x=i+1;
    if(x>=n) x-=n;
    int sum=0;
    while(x!=i){
      sum+=a[x];
      x+=2;
      if(x>=n) x-=n;
    }
    cout<<all_sum-sum*2<<" ";
  }
}
