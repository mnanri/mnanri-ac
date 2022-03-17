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
  int n,k;
  cin >> n >> k;
  vector<int> p(n);
  for(int i=0;i<n;i++) cin >> p[i];

  vector<int> c(n+1,0);
  for(int i=0;i<k;i++) c[p[i]]=1;
  int tmp=-1;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(c[n-i]){
      cnt++;
      if(cnt==k){
        tmp=n-i;
        break;
      }
    }
  }
  cout << tmp << endl;
  for(int i=k;i<n;i++){
    c[p[i]]=1;
    if(p[i]<tmp){
      cout << tmp << endl;
    }else{
      for(int j=tmp+1;j<n+1;j++){
        if(c[j]){
          tmp=j;
          break;
        }
      }
      cout << tmp << endl;
    }
  }
}
