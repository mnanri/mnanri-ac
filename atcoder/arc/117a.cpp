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
  int a,b;
  cin >> a >> b;
  if(a==b){
    for(int i=0;i<a;i++){
      cout << i+1 << ' ';
    }
    for(int i=0;i<b;i++){
      cout << -(i+1) << ' ';
    }
    cout << endl;
  }else if(a>b){
    int tmp=0;
    for(int i=0;i<a;i++){
      cout << (i+1) << ' ';
      tmp+=(i+1);
    }
    for(int i=0;i<b-1;i++){
      cout << -(i+1) << ' ';
      tmp-=(i+1);
    }
    cout << -tmp << endl;
  }else{
    int tmp=0;
    for(int i=0;i<b;i++){
      cout << -(i+1) << ' ';
      tmp+=(i+1);
    }
    for(int i=0;i<a-1;i++){
      cout << (i+1) << ' ';
      tmp-=(i+1);
    }
    cout << tmp << endl;
  }
}
