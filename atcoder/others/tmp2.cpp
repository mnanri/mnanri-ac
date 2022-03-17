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
  if(n%2!=0) return 0;

  vector<string> u;
  for(int tmp=0; tmp<(1<<n); tmp++){
    bitset<20> s(tmp);
    int sum=0;
    string t;
    int check=1;
    for(int i=n-1;i>-1;i--){
      if(s.test(i)){
        t.push_back('(');
        sum++;
      }else{
        t.push_back(')');
        sum--;
      }
      if(sum<0){
        check=0;
        break;
      }
    }
    if(check && sum==0) u.push_back(t);
  }

  reverse(u.begin(),u.end());
  for(int i=0;i<u.size();i++) cout << u[i] << endl;
}
