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

int main(){
  int a,b;
  cin >> a >> b;
  if(a>=3000){
    if(b>700){
      cout << a+b-700 << endl;
    }else{
      cout << a << endl;
    }
  }else{
    if(b>700){
      cout << a+b-350 << endl;
    }else{
      cout << a+b/2 << endl;
    }
  }
}
