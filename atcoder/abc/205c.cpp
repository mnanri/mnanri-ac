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
  ll a,b,c;
  cin >> a >> b >> c;

  if(c%2==0){
    if(abs(a)>abs(b)){
      cout << '>' << endl;
    }else if(abs(a)==abs(b)){
      cout << '=' << endl;
    }else{
      cout << '<' << endl;
    }
  }else{
    if(a>b){
      cout << '>' << endl;
    }else if(a==b){
      cout << '=' << endl;
    }else{
      cout << '<' << endl;
    }
  }
}
