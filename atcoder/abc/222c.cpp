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
  int n,m;
  cin >> n >> m;
  vector<string> a(2*n);
  for(int i=0;i<2*n;i++) cin >> a[i];

  vector<pair<int,int> > r(2*n);
  for(int i=0;i<2*n;i++){
    r[i].first=0;
    r[i].second=i;
  }

  for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
      if((a[r[2*j].second][i]=='G' && a[r[2*j+1].second][i]=='C') || (a[r[2*j].second][i]=='C' && a[r[2*j+1].second][i]=='P') || (a[r[2*j].second][i]=='P' && a[r[2*j+1].second][i]=='G')){
        r[2*j].first--;
      }else if((a[r[2*j+1].second][i]=='G' && a[r[2*j].second][i]=='C') || (a[r[2*j+1].second][i]=='C' && a[r[2*j].second][i]=='P') || (a[r[2*j+1].second][i]=='P' && a[r[2*j].second][i]=='G')){
        r[2*j+1].first--;
      }
    }
    sort(r.begin(),r.end());
    //for(int k=0;k<2*n;k++) cout << r[k].second+1 << ' ';
    //cout << endl;
  }

  for(int i=0;i<2*n;i++) cout << r[i].second+1 << endl;
}
