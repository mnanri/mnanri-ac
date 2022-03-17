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
  int k;
  cin >> s >> k;
  sort(s.begin(),s.end());
  int cnt=0;
  do{
    cnt++;
    if(cnt==k){
      cout << s << endl;
      break;
    }
  }while (next_permutation(s.begin(),s.end()));
}
