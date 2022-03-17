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
  int k;
  cin >> k;
  //ダンジョンの路を設定
  string t;
  for(int i=0;i<50;i++){
    t.push_back('.');
  }
  vector<string> s(50,t);
  for(int i=1;i<50;i+=2){
    if(i%4==1){
      for(int j=0;j<49;j++){
        s[i][j]='#';
      }
    }else{
      for(int j=1;j<50;j++){
        s[i][j]='#';
      }
    }
  }
  //スタート位置の設定
  s[0][0]='S';
  int row=(k/51)*2;
  int p=k%51;
  if(row%4==0){
    if(p==50){
      s[row+1][49]=='G';
    }else{
      s[row][p]='G';
    }
  }else{
    if(p==50){
      s[row+1][0]=='G';
    }else{
      s[row][49-p]=='G';
    }
  }
  cout << 50 << ' ' << 50 << endl;
  for(int i=0;i<50;i++) cout << s[i] << endl;
}
