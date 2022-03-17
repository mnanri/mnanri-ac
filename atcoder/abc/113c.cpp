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
    vector<pair<int,int> > c;
    for(int i=0;i<m;i++){
        int p,y;
        cin >> p >> y;
        c.push_back(make_pair(p,y));
    }
    vector<vector<int> > s(n+1);
    for(int i=0;i<m;i++) s[c[i].first].push_back(c[i].second);

    map<string,int> id;
    for(int i=1;i<n+1;i++){
        if(s[i].size()==0) continue;
        sort(s[i].begin(),s[i].end());
        for(int j=0;j<s[i].size();j++){
            id[to_string(i)+to_string(s[i][j])]=j+1;
        }
    }

    for(int i=0;i<m;i++){
        cout << setfill('0') << right << setw(6) << c[i].first;
        cout << setw(6) << id[to_string(c[i].first)+to_string(c[i].second)];
        cout << endl; 
    }
}