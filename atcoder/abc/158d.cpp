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
    string s;
    cin >> s;
    int q;
    cin >> q;
    int sign=0;
    string p;
    
    for(int i=0;i<q;i++){
        int t;
        cin >> t;
        if(t==1){
            sign++;
        }else{
            int f;
            char c;
            cin >> f >> c;
            if(sign%2==0){
                if(f==2){
                    s.push_back(c);
                }else{
                    p.push_back(c);
                }
            }else{
                if(f==1){
                    s.push_back(c);
                }else{
                    p.push_back(c);
                }
            }
        }
    }

    if(sign%2==0){
        reverse(p.begin(),p.end());
        cout << p+s << endl;
    }else{
        reverse(s.begin(),s.end());
        cout << s+p << endl;
    }
}