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
    int n;
    cin >> n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(),a.end());

    vector<int> y;
    y.push_back(a.at(0));
    for(int i=1;i<n;i++){
        if(a.at(i)==a.at(i-1)){
            continue;
        }else{
            y.push_back(a.at(i));
        }
    }

    for(int i=0;i<y.size();i++) cout << y.at(i) << ' ';
    cout << endl;

    vector<int> c;
    c.push_back(1);
    int tmp=y.at(0);
    for(int i=2;;i++){
        if(tmp%i==0){
            c.push_back(i);
            while(tmp%i==0){
                tmp/=i;
            }
        }
    }

    sort(c.begin(),c.end());
    reverse(c.begin(),c.end());

    for(int i=0;i<c.size();i++) cout << c.at(i) << ' ';
    cout << endl;

    for(int i=0;i<c.size();i++){
        for(int j=1;j<y.size();j++){
            if(y.at(j)%c.at(i)!=0) continue;
            if(j==y.size()-1){
                cout << c.at(i) << endl;
                return 0;
            }
        }
    }
    
}