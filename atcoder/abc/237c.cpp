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
  string s;
  cin >> s;
  int n = s.size();
  int cnt=0;
  for(int i=0;i<n;i++){
    if(s[i]=='a'){
      cnt--;
    }else{
      break;
    }
  }
  for(int i=n-1;i>=0;i--){
    if(s[i]=='a'){
      cnt++;
    }else{
      break;
    }
  }
  reverse(s.begin(),s.end());
  for(int i=0;i<cnt;i++){
    s.push_back('a');
  }
  n = s.size();
  for(int i=0;i<n/2;i++){
    if(s[i]!=s[n-1-i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
