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
  string x;
  cin >> x;
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0;i<n;i++) cin >> s[i];

  map<char,char> dict;
  for(int i=0;i<26;i++) dict[x[i]]=(char)('a'+i);
  vector<pair<string,int> > tr(n);
  for(int i=0;i<n;i++){
    string tmp;
    for(int j=0;j<s[i].size();j++){
      tmp.push_back(dict[s[i][j]]);
    }
    tr[i].first=tmp;
    tr[i].second=i;
  }
  sort(tr.begin(),tr.end());

  for(int i=0;i<n;i++) cout << s[tr[i].second] << endl;
}
