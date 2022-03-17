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
  string s;
  cin >> s;
  int c=0,e=0,n=0;
  for(int i=0;i<10;i++){
    if(s[i]=='x'){
      e++;
    }else if(s[i]=='o'){
      c++;
    }else{
      n++;
    }
  }

  if(c==0){
    cout << n*n*n*n << endl;
  }else if(c==1){
    int m=n+1;
    cout << m*m*m*m - n*n*n*n << endl;
  }else if(c==2){
    cout << 12*n*n + 24*n + 14 << endl;
  }else if(c==3){
    cout << 24*n + 36 << endl;
  }else if(c==4){
    cout << 24 << endl;
  }else{
    cout << 0 << endl;
  }
}
