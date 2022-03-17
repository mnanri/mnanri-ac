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

int main(){
  int n;
  cin >> n;
  vector<pair<pair<int,int>,int> > name(n);
  for(int i=0;i<n;i++) {
    cin >> name[i].first.first >> name[i].first.second;
    name[i].second=1;
    if(name[i].first.first<name[i].first.second){
      swap(name[i].first.first,name[i].first.second);
      name[i].second=0;
    }
  }
  sort(name.begin(),name.end());

  int pairs=0;
  int x=name[0].first.first,y=name[0].first.second;
  int p=0,q=0;
  for(int i=0;i<n;i++){
    int a=name[i].first.first, b=name[i].first.second;
    if(x!=a || y!=b){
      if(x==y){
        pairs+=p/2;
      }else{
        pairs+=min(p,q);
      }
      x=a,y=b;
      p=0,q=0;
    }
    if(x==y){
      p++;
    }else{
      if(name[i].second){
        p++;
      }else{
        q++;
      }
    }
  }
  if(x==y){
    pairs+=p/2;
  }else{
    pairs+=min(p,q);
  }
  cout << pairs << endl;
}
