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

const llong C = 1000000000000000000;

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int main(){

  int n;
  cin >> n;
  
  int cnt = 0;
  vector<llong> s(n);
  REP(i,n){
    cin >> s[i];
    if(s[i] == 0) cnt = -1;
  }
  if(cnt == -1){
    cout << 0 << endl;
    return 0;
  }

  llong prod = 1;
  REP(i,n){
    if(s[i] <= C / prod){
      prod *= s[i];
    }else{
      cout << -1 << endl;
      return 0;
    }
  }

  if(prod <= C){
    cout << prod << endl;
  }else{
    cout << -1 << endl;
  }
  return 0;
}

