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

int main(int argc, char *argv[]) {
  // start from 1 to ignore script name; argv[0] will be a name of processing file.
  //for (int i = 1; i < argc; i++) {
  //  cout << "argv[" << i << "]:" << argv[i] << "\n";
  //}
  //return 0;

  ll l = stoll(argv[1]);
  ll r = stoll(argv[2]);
  int m = stoi(argv[3]);
  vector<ll> n(m);
  for(int i=4;i<argc;i++) n[i-4] = stoll(argv[i]);

  if(m==1){
    ll tmp = r - l;
    ll p = l % n[0];
    ll q = r % n[0];
    cout << p << ' ' << q << endl;
    if(){
      cout << tmp-tmp/n[0] << endl;
    }else{
      cout << tmp-tmp/n[0]+1 << endl;
    }
  }else if(r<=100000){
    vector<int> monster(r+1,1);
    for(int i=1;i<r+1;i++){
      for(int j=0;j<n.size();j++){
        if(i%n[j]==0){
          monster[i]=0;
          break;
        }
      }
    }
  }else{
    cout << "I cannot solve it" << endl;
  }
}
