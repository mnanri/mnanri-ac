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
  double n;
  cin >> n;
  n*=1.08;
  int m=floor(n);
  if(m<206){
    cout << "Yay!" << endl;
  }else if(m==206){
    cout << "so-so" << endl;
  }else{
    cout << ":(" << endl;
  }
}
