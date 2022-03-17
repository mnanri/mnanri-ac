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
  ll n,q;
  cin >> n >> q;
  vector<int> t(q);
  for(int i=0;i<q;i++) {
    cin >> t[i];
    t[i]--;
  }
  /*if(n<=100){
    vector<int> d(n);
    for(int i=0;i<n;i++) d[i]=i;
    for(int i=0;i<n;i++){
      int kep=d[0];
      for(int j=i;j>=0;j--){
        int tmp=d[j];
        d[j]=kep;
        kep=tmp;
      }
    }
    for(int i=0;i<q;i++){
      for(int j=0;j<n;j++){
        if(d[j]==t[i]){
          cout << j+1 << endl;
          break;
        }
      }
    }
  }else*/ if(n<=100000){
    queue<int> d;
    d.push(0);
    for(int i=1;i<n;i++){
      int tmp=d.front();
      d.pop();
      d.push(i);
      d.push(tmp);
    }
    int cnt=1;
    vector<int> e(n);
    for(int i=0;i<n;i++){
      int tmp=d.front();
      d.pop();
      e[tmp]=cnt;
      cnt++;
    }
    for(int i=0;i<q;i++){
      cout << e[t[i]] << endl;
    }
  }
}
