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

int gcd(int a, int b){
  if(a < b){
    swap(a, b);
  }
  if(a % b == 0) return b;
  
  return gcd(b, a % b);
}

int main(){

  llong k;
  cin >> k;

  llong ans = 0;
  for(int i = 1; i <= k; ++i){
    for(int j = 1; j <= k; ++j){
      for(int l = 1; l <= k; ++l){
        ans += gcd(i, gcd(j, l));
      }
    }
  }
  cout << ans << endl;
  return 0;
}

