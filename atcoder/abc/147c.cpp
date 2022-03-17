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
    int n;
    cin >> n;
    const int m=n;
    vector<vector<int> > z(n,vector<int>(n,-1));
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
            int x,y;
            cin >> x >> y;
            x--;
            z[i][x]=y;
        }
    }

    int cnt=0;
    for(int tmp=0;tmp<(1<<15);tmp++){
        bitset<15> s(tmp);
        //vector<int> kep(n,-1);
        int kep=1;
        int acnt=0;
        for(int i=0;i<n;i++){
            int check=0;
            if(s.test(i)){
                acnt++;
                for(int j=0;j<n;j++){
                    if(z[i][j]==1){
                        if(!s.test(j)){
                            check=1;
                            break;
                        }
                    }else if(z[i][j]==0){
                        if(s.test(j)){
                            check=1;
                            break;
                        }
                    }
                }
            }
            if(check) {
                kep=0;
                break;
            }
        }
        if(kep){
            cnt=max(cnt,acnt);
        }
    }

    cout << cnt << endl;
}