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

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a[i];

  int q;
  cin >> q;
  for(int i=0;i<q;i++){
    int s,e;
    cin >> s >> e;
    int sum=0;
    for(int j=s;j<=e;j++) sum+=a[j-1];
    int tmp = sum/(e-s+1)-m;
    //cout << -tmp << endl;
    if(tmp<0){
      for(int j=s;j<=e;j++) a[j-1]-=tmp;
    }else{
      continue;
    }
  }

  for(int i=0;i<n;i++) cout << a[i] << ' ';
  cout << endl;
}
