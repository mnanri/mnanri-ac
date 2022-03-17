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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];
  sort(a.begin(),a.end());

  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int b;
    cin >> b;
    if(b<=a[0]){
      cout << a[0]-b << endl;
      continue;
    }
    if(b>=a[n-1]){
      cout << b-a[n-1] << endl;
      continue;
    }
    int s=0,g=n-1;
    int tmp=g-s;
    int var=(s+g)/2;
    int ind=1;
    while(tmp>1){
      if(a[var]>b){
        g=var;
        tmp=g-s;
        var=(s+g)/2;
      }else if(a[var]<b){
        s=var;
        tmp=g-s;
        var=(s+g)/2;
      }else{
        cout << 0 << endl;
        ind=0;
        break;
      }
    }
    if(ind) cout << min(abs(a[s]-b),abs(a[g]-b)) << endl;
  }

}
