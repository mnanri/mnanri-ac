#include<iostream>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<tuple>
#include<map>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<math.h>
using namespace std;


int main(){
    int x,n;
    cin >> x >> n;
    if(n==0){
        cout << x-1 << endl;
        return 0;
    }
    vector<int> p;
    int i,q;
    for(i=0;i<n;i++){
        cin >> q;
        p.push_back(q); 
    }
    
    sort(p.begin(),p.end());
    
    int j,a=-1;
    for(i=x+1;i<=101;i++){　
        for(j=0;j<p.size();j++){
            if(x+1<=p.at(j) && i!=p.at(j)){
                a = i;
                cout << p.at(j) << endl;
                break;
            }
            cout << a << endl;
        }
        if(a!=-1) break;
    }
    cout << endl;
    
    reverse(p.begin(),p.end());
    int b=-1;
    for(i=x-1;i>=0;i--){　
        for(j=0;j<p.size();j++){
            if(i!=p.at(j) && x-1>=p.at(j)){
                b = i;
                cout << p.at(j) << endl;
                break;
            }
            cout << b << endl;
        }
        if(b!=-1) break;
    }
    cout << endl;

    if(x-b<=a-x){
        cout << b << endl;
    }else{
        cout << a << endl;
    }
}