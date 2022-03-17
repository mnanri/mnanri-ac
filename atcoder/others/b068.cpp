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

int main(){
  int h,w;
  cin >> h >> w;
  vector<vector<int> > c(h,vector<int>(w));
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++) cin >> c[i][j];
  }

  vector<string> d(h);
  for(int i=0;i<h;i++){
    vector<int> sum(w,0);
    int tmp=0;
    for(int j=0;j<w;j++){
      tmp+=c[i][j];
      sum[j]=tmp;
    }
    int cnt=0;
    for(int j=0;j<w;j++){
      if(sum[j]*2==tmp){
        cnt++;
        d[i].push_back('A');
        for(int k=cnt+1;k<=w;k++) d[i].push_back('B');
        break;
      }else{
        cnt++;
        d[i].push_back('A');
      }
    }
    if(cnt==w){
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  for(int i=0;i<h;i++) cout << d[i] << endl;
}
