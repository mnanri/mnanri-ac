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
  ll a,b,k;
  cin >> a >> b >> k;

  string t;
  while(a>0 && b>0){
    ll tmp=1;
    for(int i=0;i<a-1;i++){
      tmp = tmp*(a+b-(i+1))/(i+1);
    }
    if(tmp<k){
      b--;
      k-=tmp;
      t.push_back('b');
    }else{
      a--;
      t.push_back('a');
    }
    //cout << tmp << ' ' << t << endl;
  }

  if(a>0){
    while(a>0){
      a--;
      t.push_back('a');
    }
  }

  if(b>0){
    while(b>0){
      b--;
      t.push_back('b');
    }
  }

  cout << t << endl;
  //cout << t.size() << endl;
}
