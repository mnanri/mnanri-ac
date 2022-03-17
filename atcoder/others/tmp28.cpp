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
  int n;
  cin >> n;
  vector<vector<int> > c(n,vector<int>(4));
  for(int i=0;i<n;i++) cin >> c[i][0] >> c[i][1] >> c[i][2] >> c[i][3];

  vector<vector<int> > a(1001,vector<int>(1001,0));

  for(int i=0;i<n;i++){
    a[c[i][0]][c[i][1]]++;
    a[c[i][2]][c[i][3]]++;
    a[c[i][0]][c[i][3]]--;
    a[c[i][2]][c[i][1]]--;
  }

  for(int i=0;i<1001;i++){
    int sum=0;
    for(int j=0;j<1001;j++){
      sum+=a[i][j];
      a[i][j]=sum;
    }
  }

  for(int i=0;i<1001;i++){
    int sum=0;
    for(int j=0;j<1001;j++){
      sum+=a[j][i];
      a[j][i]=sum;
    }
  }

  vector<int> b(n+1,0);
  for(int i=0;i<1001;i++){
    for(int j=0;j<1001;j++){
      b[a[i][j]]++;
    }
  }

  for(int i=1;i<n+1;i++) cout << b[i] << endl;
}
