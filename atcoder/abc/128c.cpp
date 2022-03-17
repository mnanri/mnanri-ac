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
    int n,m;
    cin >> n >> m;
    vector<vector<int> > s(m);
    vector<int> c(m);
    for(int i=0;i<m;i++){
        int k;
        cin >> k;
        c[i]=k;
        for(int j=0;j<k;j++){
            int l;
            cin >> l;
            s[i].push_back(l);
        }
    }
    vector<int> p(m);
    for(int i=0;i<m;i++) cin >> p[i];
    /*for(int i=0;i<m;i++){
        for(int j=0;j<c[i];j++){
            cout << s[i][j] << ' ';
        }
        cout << endl;
    }*/

    int cnt=0;
    for(int tmp=0;tmp<(1<<n);tmp++){
        int check=1;
        bitset<10> b(tmp);
        //cout << b << endl;
        for(int i=0;i<m;i++){
            int kep=0;
            for(int j=0;j<c[i];j++){
                if(b.test(s[i][j]-1)) kep++;
            }
            if(kep%2!=p[i]) {
                check=0;
                break;
            }
        }
        if(check) cnt++;
    }
    cout << cnt << endl;
}