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
  vector<char> t(s.size());
  int n=s.size();
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){
      t[n-1-i]='0';
    }else if (s[i]=='1'){
      t[n-1-i]='1';
    }else if (s[i]=='6'){
      t[n-1-i]='9';
    }else if (s[i]=='8'){
      t[n-1-i]='8';
    }else{
      t[n-1-i]='6';
    }
  }

  for(int i=0;i<n;i++) cout << t[i];
  cout << endl;
}
