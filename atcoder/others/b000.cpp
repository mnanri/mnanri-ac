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
  int k,n;
  cin >> k >> n;
  vector<vector<char> > r(n,vector<char>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) cin >> r[i][j];
  }

  vector<vector<vector<char> > > ans(k+1);
  ans[0]=r;

  for(int w=0;w<k;w++){
    vector<vector<char> > tmp(n*n,vector<char>(n*n));
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(ans[w][i][j]=='#'){
          for(int p=0;p<n;p++){
            for(int q=0;q<n;q++){
              tmp[i*n+p][j*n+q]=ans[w][p][q];
            }
          }
        }else{
          for(int p=0;p<n;p++){
            for(int q=0;q<n;q++){
              tmp[i*n+p][j*n+q]='.';
            }
          }
        }
      }
    }
    ans[w+1]=tmp;
    n*=n;
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cout << ans[k][i][j];
    }
    cout << endl;
  }
}
