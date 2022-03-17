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
  vector<int> a(3);
  for(int i=0;i<3;i++) cin >> a[i];
  sort(a.begin(),a.end());

  if(a[1]-a[0]==a[2]-a[1]){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
