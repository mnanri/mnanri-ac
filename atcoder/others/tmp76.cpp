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
  int n;
  cin >> n;
  vector<ll> a(n);
  ll sum=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    sum+=a[i];
  }
  if(sum%10!=0){
    cout << "No" << endl;
    return 0;
  }
  ll v=sum/10;
  ll tmp=0;
  queue<int> r;
  for(int i=0;i<2*n;i++){
    int j=i%n;
    tmp+=a[j];
    r.push(j);
    if(tmp==v){
      cout << "Yes" << endl;
      return 0;
    }else if(tmp>v){
      while(tmp>v){
        tmp-=a[r.front()];
        r.pop();
      }
      if(tmp==v){
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
