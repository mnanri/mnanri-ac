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
  int h,w;
  cin >> h >> w;
  vector<vector<int> > a(h,vector<int>(w));
  vector<int> sumh(h);
  for(int i=0;i<h;i++){
    int tmp=0;
    for(int j=0;j<w;j++){
      cin >> a[i][j];
      tmp+=a[i][j];
    }
    sumh[i]=tmp;
  }

  vector<int> sumw(w);
  for(int i=0;i<w;i++){
    int tmp=0;
    for(int j=0;j<h;j++){
      tmp+=a[j][i];
    }
    sumw[i]=tmp;
  }

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cout << sumh[i]+sumw[j]-a[i][j] << ' ';
    }
    cout << endl;
  }
}
