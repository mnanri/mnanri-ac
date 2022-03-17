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
  int n,g,m;
  cin >> n >> g >> m;
  vector<vector<int> > a(g);
  for(int i=0;i<g;i++){
    int k;
    cin >> k;
    vector<int> b(k);
    for(int j=0;j<k;j++) cin >> b[j];
    a[i]=b;
  }
  //for(int i=0;i<a[0].size();i++) cout << a[0][i] << ' ';

  vector<vector<string> > chat(n);
  for(int i=0;i<m;i++){
    int s,c,t;
    string msg;
    cin >> s >> c >> t >> msg;
    if(c){
      //cout << "size: " << a[t-1].size() << endl;
      for(int j=0;j<a[t-1].size();j++){
        //cout << a[t-1][j] << ' ' << "sent" << endl;
        chat[a[t-1][j]-1].push_back(msg);
      }
    }else{
      chat[s-1].push_back(msg);
      chat[t-1].push_back(msg);
    }
  }

  for(int i=0;i<n-1;i++){
    for(int j=0;j<chat[i].size();j++){
      cout << chat[i][j] << endl;
    }
    cout << "--" << endl;
  }
  for(int i=0;i<chat[n-1].size();i++){
    cout << chat[n-1][i] << endl;
  }
}
