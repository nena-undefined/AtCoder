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

#define REP(i,n) for(long long i=0;i<n;++i)
#define REPR(i,n) for(long long i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define INF 999999999
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair
#define SV(v) {for(long long sitr=0;sitr<v.size();++sitr){cin>>v[sitr];}}

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int main(){

  llong n, m, k;
  cin >> n >> m >> k;
  vector<llong> a(n), b(m);

  REP(i,n){
    cin >> a[i];
  }

  REP(i,m){
    cin >> b[i];
  }


  REP(i,n-1){
    a[i+1] += a[i];
  }
  REP(i,m-1){
    b[i+1] += b[i];
  }

  llong ans = 0;
  llong t = 0;
  llong j = m-1;
  for(llong i = 0; i <= n; ++i){
    
    if(i != 0){
      t = a[i-1];
    }

    while(j >= 0 && t + b[j] > k){
      j--;
    }
    if(j < 0){
      if(t <= k){
        ans = max(ans, i);
      }
    }else{
      ans = max(ans, i + j + 1);
    }
  }

  cout << ans << endl;
  return 0;
}

