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
  ll n;
  cin >> n;
  string s;
  for(int i=0;i<=120;i++){
    if(n==0){
      reverse(s.begin(),s.end());
      cout << s << endl;
      break;
    }else if(n%2==0){
      n/=2;
      s.push_back('B');
    }else{
      n--;
      s.push_back('A');
    }
  }
}
