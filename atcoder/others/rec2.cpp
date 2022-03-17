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
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0;i<n;i++) cin >> s[i];

  //行を検証
  for(int i=0;i<n;i++){
    int check=1;
    for(int j=0;j<n;j++){
      if(s[i][j]=='x'){
        check=0;
        break;
      }
    }
    if(check){
      cout << "Yes" << endl;
      return 0;
    }
  }

  //列を検証
  for(int i=0;i<n;i++){
    int check=1;
    for(int j=0;j<n;j++){
      if(s[j][i]=='x'){
        check=0;
        break;
      }
    }
    if(check){
      cout << "Yes" << endl;
      return 0;
    }
  }

  //斜めを検証
  int check=1;
  for(int i=0;i<n;i++){
    if(s[i][i]=='x'){
      check=0;
      break;
    }
  }
  if(check){
    cout << "Yes" << endl;
    return 0;
  }
  check=1;
  for(int i=0;i<n;i++){
    if(s[i][n-1-i]=='x'){
      check=0;
      break;
    }
  }
  if(check){
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;
}
