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

struct UnionFind{
  vector<int> r;

  UnionFind(int n){
    r=vector<int>(n,-1);
  }
  int root(int x){
    if(r[x]<0) return x;
    return r[x]=root(r[x]);
  }
  bool unite(int x, int y){
    x=root(x),y=root(y);
    if(x==y) return false;
    //if(r[x]<r[y]) swap(x,y);
    r[x]+=r[y];
    r[y]=x;
    return true;
  }
  int size(int x){
    return -r[root(x)];
  }
};

int main(){
  int n,m; cin>>n>>m;
  UnionFind UF(n);
  rep(i,m){
    int a,b; cin>>a>>b;
    a--; b--;
    UF.unite(a,b);
  }
  int cnt=0;
  rep(i,n){
    if(UF.r[i]<0) cnt++;
  }
  cout<<cnt-1<<endl;
}
