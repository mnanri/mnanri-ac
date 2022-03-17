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
    int n,m,q;
    cin >> n >> m >> q;
    //vector<int> w(n);
    //vector<int> v(n);
    vector<pair<int,int> > obj(n);
    for(int i=0;i<n;i++) cin >> obj[i].second >> obj[i].first;
    sort(obj.begin(),obj.end());
    reverse(obj.begin(),obj.end());

    vector<int> x(m);
    for(int i=0;i<m;i++) cin >> x[i];

    for(int i=0;i<q;i++){
        int l,r;
        cin >> l >> r;
        l--,r--;
        vector<int> tmp;
        for(int i=0;i<m;i++){
            if(i<l || i>r) tmp.push_back(x[i]);
        }
        sort(tmp.begin(),tmp.end());
        
        ll ans=0;
        vector<int> in(tmp.size(),1);
        for(int i=0;i<n;i++){
            for(int j=0;j<tmp.size();j++){
                if(tmp[j]>=obj[i].second && in[j]){
                    ans+=obj[i].first;
                    in[j]=0;
                    break;
                }
            }
        }

        cout << ans << endl;
    }
}