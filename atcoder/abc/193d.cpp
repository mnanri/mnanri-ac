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
    ll k;
    string s,t;
    cin >> k >> s >> t;
    //string ss=s.substr(0,4);
    vector<ll> card(9,k);
    vector<int> ta(9,0);
    vector<int> ao(9,0);
    for(int i=0;i<4;i++){
        string p=s.substr(i,1);
        string q=t.substr(i,1);
        int x=stoi(p);
        int y=stoi(q);
        ta[x-1]++;
        card[x-1]--;
        ao[y-1]++;
        card[y-1]--;
    }
    //for(int i=0;i<9;i++) cout << card[i] << ' ' << ta[i] << ' ' << ao[i] << endl; 

    ll cnt=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            double ka=0;
            for(int k=0;k<9;k++){
                if(k==i){
                    ka+=(k+1)*pow(10,ta[k]+1);
                }else{
                    ka+=(k+1)*pow(10,ta[k]);
                }
            }
            double ki=0;
            for(int k=0;k<9;k++){
                if(k==j){
                    ki+=(k+1)*pow(10,ao[k]+1);
                }else{
                    ki+=(k+1)*pow(10,ao[k]);
                }
            }
            //cout << ka << ' ' << ki << endl;
            if(ka>ki){
                if(i==j){
                    cnt+=(card[i]*(card[i]-1));
                }else{
                    cnt+=(card[i]*card[j]);
                }
            }
        }
    }
    //cout << cnt << endl;
    cout << fixed << setprecision(7) << 1.0*cnt/((9*k-8)*(9*k-9)) << endl;
}