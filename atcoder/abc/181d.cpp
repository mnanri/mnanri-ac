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

int ctoi(const char c){
  if('0' <= c && c <= '9') return (c-'0');
  return -1;
}

int main(){
    string s;
    cin >> s;
    vector<int> n(10,0);
    for(int i=0;i<s.size();i++) {
        int tmp=ctoi(s.at(i));
        n.at(tmp)++;
    }
    //for(int i=0;i<n.size();i++) cout << n.at(i) << endl;

    if(s.size()==1){
        if(s=="8"){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    if(s.size()==2){
        for(int i=16;i<=96;i+=8){
            string t=to_string(i);
            int x=ctoi(t.at(0));
            int y=ctoi(t.at(1));
            if(x!=y){
                if(n[x]>0 && n[y]>0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }else{
                if(n[x]>1){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }        
        cout << "No" << endl;
        return 0;
    }

    if(s.size()>2){
        for(int i=104;i<1000;i+=8){
            string t=to_string(i);
            int x=ctoi(t.at(0));
            int y=ctoi(t.at(1));
            int z=ctoi(t.at(2));
            if(x!=y && x!=z && y!=z){
                if(n[x]>0 && n[y]>0 && n[z]>0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(x==y && y==z){
                if(n[x]>2){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(x!=y && x==z){
                if(n[x]>1 && n[y]>0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(x!=y && y==z){
                if(n[x]>0 && n[y]>1){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(x!=z && x==y){
                if(n[x]>1 && n[z]>0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(x!=z && z==y){
                if(n[x]>0 && n[z]>1){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(y!=z && y==x){
                if(n[x]>1 && n[z]>0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            if(y!=z && z==x){
                if(n[x]>1 && n[y]>0){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
        cout << "No" << endl;
        return 0;
    }
}