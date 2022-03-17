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

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    vector<bool> bad(n);
    for(int i=0;i<n;i++){
      if(s[i]=='S'){
        bad[i]=true;
      }else{
        bad[i]=false;
      }
    }

    for(int i=1; i<n-1; i++){
      if(k==0) break;
      if(bad[i-1] && bad[i] && bad[i+1]){
        bad[i-1]=false;
        bad[i]=false;
        bad[i+1]=false;
        k--;
      }
    }

    for(int i=1; i<n-1; i++){
      if(k==0) break;
      if(bad[i-1]+bad[i]+bad[i+1]>=2){
        bad[i-1]=false;
        bad[i]=false;
        bad[i+1]=false;
        k--;
      }
    }

    for(int i=1; i<n-1; i++){
      if(k==0) break;
      if(bad[i-1]+bad[i]+bad[i+1]>=1){
        bad[i-1]=false;
        bad[i]=false;
        bad[i+1]=false;
        k--;
      }
    }

    int cnt=0;
    for(int i=0;i<n;i++){
      if(!bad[i]) cnt++;
    }
    cout << cnt << endl;

}
