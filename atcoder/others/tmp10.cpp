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
  vector<int> one(n+1,0);
  vector<int> two(n+1,0);
  int sumo=0,sumt=0;
  for(int i=1;i<=n;i++){
    int c,p;
    cin >> c >> p;
    if(c==1){
      sumo+=p;
    }else{
      sumt+=p;
    }
    one[i]=sumo;
    two[i]=sumt;
  }

  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int l,r;
    cin >> l >> r;
    cout << one[r]-one[l-1] << ' ' << two[r]-two[l-1] << endl;
  }
}
