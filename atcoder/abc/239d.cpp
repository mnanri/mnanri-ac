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
  int a,b,c,d;
  cin >> a >> b >> c >> d;
  int p[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};

  vector<bool> num(201,false);
  for(int i=0;i<46;i++) num[p[i]] = true;

  for(int i=a;i<=b;i++){
    bool check = true;
    for(int j=c;j<=d;j++){
      if(num[i+j]){
        check = false;
        break;
      }
    }
    if(check) {
      cout << "Takahashi" << endl;
      return 0;
    }
  }

  cout << "Aoki" << endl;
}
