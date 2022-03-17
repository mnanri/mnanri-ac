#include<iostream>
#include<iomanip>
#include<string>
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
  string s;
  cin >> s;
  deque<char> t;

  int n=s.size();
  int r=0;
  for(int i=0;i<n;i++){
    if(s[i]=='R'){
      if(r){
        r=0;
      }else{
        r=1;
      }
    }else{
      if(r){
        t.push_front(s[i]);
      }else{
        t.push_back(s[i]);
      }
    }
  }
  if(r) reverse(t.begin(),t.end());

  stack<char> u;
  int m=t.size();
  for(int i=0;i<m;i++){
    if(u.empty()){
      u.push(t[i]);
    }else{
      char tmp=u.top();
      if(t[i]==tmp){
        u.pop();
      }else{
        u.push(t[i]);
      }
    }
  }

  string ans;
  for(int i=u.size()-1;i>=0;i--){
    ans.push_back(u.top());
    u.pop();
  }
  reverse(ans.begin(),ans.end());
  cout << ans << endl;
}
