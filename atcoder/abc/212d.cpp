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
  int q;
  cin >> q;
  priority_queue<ll, vector<ll>, greater<ll>> pq;
  ll sum=0;
  for(int i=0;i<q;i++){
    int p;
    cin >> p;
    if(p==1){
      ll x;
      cin >> x;
      pq.push(x-sum);
    }else if(p==2){
      ll x;
      cin >> x;
      sum+=x;
    }else{
      ll x=pq.top();
      pq.pop();
      cout << x+sum << endl;
    }
  }
}
