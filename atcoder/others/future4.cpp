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
const ll M = 100003;

int main(){
  int n;
  cin >> n;
  vector<int> c(n);
  vector<ll> d(100001,0);
  for(int i=0;i<n;i++) cin >> c[i];
  sort(c.begin(),c.end());
  if(n<=8){
    for(int i=0;i<n;i++) d[c[i]]++;
    int answer=0;
    do {
      int good=1;
      for(int i=0;i<n;i++){
        int check=0;
        for(int j=i-1;j>=0;j--){
          if(c[i]<c[j]) check++;
        }
        if(check>1) good=0;
      }
      if(good) answer++;
    } while (next_permutation(c.begin(),c.end()));
    for(int i=0;i<100001;i++){
        if(d[i]>1){
          ll multi=d[i];
          while(d[i]>1){
            d[i]--;
            multi*=d[i];
          }
          answer*=multi;
        }
      }
    cout << answer << endl;
  }else{
    vector<vector<ll> > p(n+1, vector<ll>(n+1, 0));
    p[0][0] = 1;
    for (int i=1;i<n+1;i++) {
        for (int j=1;j<n+1;j++) {
            if (i-j >= 0) {
                p[i][j] = (p[i-1][j-1] + p[i-j][j]) % M;
            } else {
                p[i][j] = p[i-1][j-1];
            }
        }
    }
    ll answer=0;
    for(int i=1;i<n+1;i++){
      answer+=p[n][i];
      answer%=M;
    }
    cout << answer << endl;
  }
}
