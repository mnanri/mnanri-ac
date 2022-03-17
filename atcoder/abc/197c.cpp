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
    vector<bitset<30> > a(n);
    for(int i=0;i<n;i++){
        ll b;
        cin >> b;
        bitset<30> tmp(b);
        a[i]=tmp;
    }

    ll ans=(ll)pow(2,64);

    /*vector<vector<bitset<30> > d(n);
    for(int i=0;i<n;i++){
        bitset<30> var=a[i];
        for(int j=i;j<n;j++){
            var |= a[j];
            d[i].push_back(var);
        }
    }*/

    int m=n-1;
    for(int tmp=0;tmp<(1<<m);tmp++){
        bitset<19> s(tmp);
        vector<bitset<30> > c;
        
        int kep=0;
        bitset<30> x=a[0];
        for(int i=0;i<m;i++){
            if(s.test(i)){
                c.push_back(x);
                x=a[i+1];
            }else{
                x|=a[i+1];
            }
        }
        c.push_back(x);
        /*cout << s << ' '; 
        for(int i=0;i<c.size();i++) cout << c[i].to_ullong() << ' ';
        cout << endl;*/

        bitset<30> y=c[0];
        for(int i=1;i<c.size();i++){
            y^=c[i];
        }

        ll z=y.to_ullong();
        //cout << z << endl;
        ans=min(ans,z);
    }
    cout << ans << endl;
}