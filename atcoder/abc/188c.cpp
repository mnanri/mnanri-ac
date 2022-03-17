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
    vector<vector<pair<int,int> > >a(n);
    int m=(int)pow(2,n);
    for(int i=0;i<m;i++){
        int b;
        cin >> b;
        a[0].push_back(make_pair(b,i+1));
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j+=2){
            if(a[i-1][j].first>a[i-1][j+1].first){
                a[i].push_back(a[i-1][j]);
            }else{
                a[i].push_back(a[i-1][j+1]);
            }
        }
    }

    if(a[n-1][0].first>a[n-1][1].first){
        cout << a[n-1][1].second << endl;
    }else{
        cout << a[n-1][0].second << endl;
    }
}   