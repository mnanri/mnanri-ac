#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
//const long long MOD = ;
const long long INF_LL = 1e18+3; const int INF_int = 1e9+3;
#define ll long long
#define rep(i,n) for(int i = 0;i<n;i++)
#define lrep(i,n) for(long long i = 0;i<n;i++)
#define All(a) a.begin(),a.end()
#define Debug_Output_ALL(a) for(auto itr = a.begin();itr!=a.end();itr++) cout << *itr << " ";cout << endl;
int main(){
    int h,w,k;
    cin >> h >> w >> k;
    char choco[h][w];
    rep(i,h) rep(j,w) cin >> choco[i][j];
    int ans = h*w;
    int matakitane = -1;
    rep(i,pow(2,h-1)){
        vector<int> vec;
        vec.push_back(0);
        int tmpans  = 0;
        rep(j,h-1) if(i&(1<<j)) vec.push_back(j+1),tmpans++;
        vec.push_back(h);
        int c[tmpans+1];
        rep(j,tmpans+1) c[j]=0;
        //Debug_Output_ALL(vec);
        //if(i==2) Debug_Output_ALL(vec);
        //if(i==2) cout << tmpans << endl;
        rep(j,w){
            int maxc = -1;
            for(int k = 1;k<vec.size();k++){
                for(int l = vec[k-1];l<vec[k];l++){
                    if(choco[l][j]=='1') c[k-1]++;
                }
            }
            rep(k,vec.size()-1) maxc = max(maxc,c[k]);
            //if(i==2) cout << maxc << " ";
            if(maxc>k){
                tmpans++;
                rep(k,vec.size()-1) c[k]=0;
                if(matakitane==j){
                    tmpans = INF_int;
                    //if(i==2) cout << "meu" << endl;
                    break;
                }
                matakitane = j;
                j--;
                //if(i==2) cout << j << endl;
            }
        }
        //if(i==2) cout << tmpans << endl;
        ans = min(ans,tmpans);
    }
    cout << ans << endl;
}
