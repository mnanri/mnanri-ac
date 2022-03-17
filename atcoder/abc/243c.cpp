#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<utility>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
#include<numeric>
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
  int n;
  cin >> n;
  vector<pair<ll,ll> > c(n);
  for(int i=0;i<n;i++) cin >> c[i].second >> c[i].first;
  string s;
  cin >> s;

  vector<pair<pair<ll,ll>, int> > mp(n);
  for(int i=0;i<n;i++){
    mp[i].first=c[i];
    if(s[i]=='L'){
      mp[i].second=1;
    }else{
      mp[i].second=0;
    }
  }

  vector<vector<pair<ll,int> > > v(n);
  sort(mp.begin(),mp.end());
  int j=0;
  ll tmp=mp[0].first.first;
  for(int i=0;i<n;i++){
    if(tmp==mp[i].first.first){
      v[j].push_back(make_pair(mp[i].first.second,mp[i].second));
    }else{
      j++;
      tmp=mp[i].first.first;
      v[j].push_back(make_pair(mp[i].first.second,mp[i].second));
    }
  }

  int m=0;
  for(int i=0;i<n;i++){
    if(v[i].size()==0) {
      m=i+1;
      break;
    }
  }

  for(int i=0;i<m;i++){
    ll a=-1,b=1000000001;
    for(int j=0;j<v[i].size();j++){
      if(v[i][j].second==1){
        a=max(a,v[i][j].first);
      }else{
        b=min(b,v[i][j].first);
      }
    }
    if(a>b){
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
}
