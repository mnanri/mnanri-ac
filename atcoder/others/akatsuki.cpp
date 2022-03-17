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

int main(){
  stack<ll> x;
  string msg="invalid";

  string s;
  while(!cin.eof()){
    cin >> s;
    if(s=="+"){
      if(x.size()>1){
        ll a=x.top();
        x.pop();
        ll b=x.top();
        x.pop();
        a+=b;
        x.push(a);
      }else{
        cout << msg << endl;
        return 0;
      }
    }else if(s=="-"){
      if(x.size()>1){
        ll a=x.top();
        x.pop();
        ll b=x.top();
        x.pop();
        b-=a;
        x.push(b);
      }else{
        cout << msg << endl;
        return 0;
      }
    }else if(s=="*"){
      if(x.size()>1){
        ll a=x.top();
        x.pop();
        ll b=x.top();
        x.pop();
        a*=b;
        x.push(a);
      }else{
        cout << msg << endl;
        return 0;
      }
    }else if(s=="@"){
      if(x.size()>2){
        ll a=x.top();
        x.pop();
        ll b=x.top();
        x.pop();
        ll c=x.top();
        x.pop();
        ll d=a*b+b*c+c*a;
        x.push(d);
      }else{
        cout << msg << endl;
        return 0;
      }
    }else if(s=="++"){
      if(x.size()>0){
        ll a=x.top();
        x.pop();
        a++;
        x.push(a);
      }
    }else{
      ll tmp=stoi(s);
      x.push(tmp);
    }
    //cout << x.size() << endl;
  }

  if(x.size()==1){
    cout << x.top() << endl;
  }else{
    cout << msg << endl;
  }
}
