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
  int t;
  double l,x,y;
  cin >> t >> l >> x >> y;

  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int e;
    cin >> e;
    double rad=M_PI*2*e/t;
    double Y=-sin(rad)*l/2;
    double Z=(-cos(rad)+1)*l/2;

    double p=sqrt(pow(x,2)+pow(y-Y,2)+pow(Z,2));
    double q=Z/p;
    double r=asin(q);

    cout << fixed << setprecision(9) << abs(r*180/M_PI) << endl;
  }
}
