#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>

#define REP(i,n) for(auto i=0;i<n;++i)
#define REPR(i,n) for(auto i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(auto i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define ll long long
#define INF 999999999
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair
#define SV(n,v) {int tmp;for(int i=0;i<n;++i){scanf("%d",&tmp);v.push_back(tmp);}}

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int n, m, q;
int a[50], b[50], c[50], d[50];

llong solve(int idx, vector<int> v){
  
  llong res = 0;
  //スコア計算
  if(idx == n){
    
    REP(i,q){
      if(v[b[i]] - v[a[i]] == c[i]) res += d[i];
    }
    return res;
  }

  if(idx == 0){
    for(int i = 1; i <= m; ++i){
      v[0] = i;
      res = max(res, solve(idx+1, v));
    }
  }else{
    for(int i = v[idx-1]; i <= m; ++i){
      v[idx] = i;
      res = max(res, solve(idx+1, v));
    }
  }

  return res;
}

int main(){

  cin >> n >> m >> q;
  vector<int> v(n);
  REP(i,n){
    v[i] = 0;
  }
  REP(i,q){
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--; b[i]--;
  }

  cout << solve(0, v) << endl;

  return 0;

}




