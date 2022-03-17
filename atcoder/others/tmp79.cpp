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
  int h,w;
  cin >> h >> w;
  vector<vector<int> > a(h,vector<int>(w));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++) cin >> a[i][j];
  }
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      int b;
      cin >> b;
      a[i][j]-=b;
    }
  }
  ll cnt=0;
  for(int i=0;i<h-1;i++){
    for(int j=0;j<w-1;j++){
      if(a[i][j]!=0){
        cnt+=(ll)abs(a[i][j]);
        a[i][j+1]-=a[i][j];
        a[i+1][j]-=a[i][j];
        a[i+1][j+1]-=a[i][j];
        a[i][j]=0;
      }
    }
  }
  for(int i=0;i<h;i++){
    if(a[i][w-1]!=0){
      cout << "No" << endl;
      return 0;
    }
  }
  for(int i=0;i<w;i++){
    if(a[h-1][i]!=0){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  cout << cnt << endl;
}
