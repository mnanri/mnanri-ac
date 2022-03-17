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
  string S;
  cin >> S;

  vector<string> a;
  // すべての選び方を試す
  for (int tmp = 0; tmp < (1 << S.size()); tmp++) {
    bitset<15> s(tmp);  // 最大Nのビット列として扱う
    string t;
    for (int i = 0; i < S.size(); i++) {
      if (s.test(i)) { // 位置の指定についてはビット列の右から左にかけて0, 1, 2, ...と対応(配列と逆)
        t.push_back(S[i]);
      }
    }
    if(t.size() > 0) a.push_back(t);
  }
  sort(a.begin(),a.end());

  int answer=1;
  string b=a[0];
  for(int i=0;i<a.size();i++){
    if(b!=a[i]){
      answer++;
      b=a[i];
    }
  }
  cout << answer << endl;
}
