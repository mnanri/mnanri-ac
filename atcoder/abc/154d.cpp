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
    int n,k;
    cin >> n >> k;
    vector<double> p;
    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        double r=(q+1)*0.5;
        p.push_back(r);
    }

    //for(int i=0;i<n;i++) cout << p.at(i) << ' ';
    //cout << endl;

    double sum=0;
    for(int i=0;i<k;i++){
        sum+=p.at(i);
    }

    double m=sum;
    for(int i=0;i<n-k;i++){
        sum= sum-p.at(i)+p.at(k+i);
        m=max(m,sum);
        //cout << sum << endl;
    }

    cout << fixed << setprecision(8) << m << endl;
}