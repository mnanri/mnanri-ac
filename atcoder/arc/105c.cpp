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
using namespace std;
using ll = int64_t;
using Graph = vector<vector<int> >;
const ll M = 1000000007;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> w;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        w.push_back(x);
    }

    sort(w.begin(),w.end());

    vector<vector<int> > p;
    for(int i=0;i<n-1;i++){
        vector<int> tmp;
        int kep=w.at(i);
        for(int j=i+1;j<n;j++){
            kep+=w.at(j);
            tmp.push_back(kep);
        }
        sort(tmp.begin(),tmp.end());
        p.push_back(tmp);
    }

    vector<pair<int,int> > b;
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        b.push_back(make_pair(y,x));
    }

    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());

    vector<pair<int,int> > f;
    f.push_back(make_pair(b.at(0).first,b.at(0).second));
    for(int i=1;i<b.size();i++){
        if(b.at(i).first==b.at(i-1).first){
            continue;
        }else{
            f.push_back(make_pair(b.at(i).first,b.at(i).second));
        }
    }

    sort(f.begin(),f.end());

    for(int i=0;i<n;i++){
        if(w.at(i)>f.at(0)){
            cout << -1 << endl;
            return 0;
        }

    }

    for(int i=0;

}