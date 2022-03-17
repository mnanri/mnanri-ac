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
    int l;
    cin >> l;
    int a[2][l];
    for(int i=0;i<l;i++) cin >> a[0][i];
    for(int i=0;i<l;i++) cin >> a[1][i];

    int m=1;
    vector<int> pre;
    for(int i=0;i<l;i++){
        if(a[0][i]==1){
            pre.push_back(m);
            m=1; 
        } 
        if(a[0][i]==0){
            if(a[1][i]==0) m++;
            if(a[1][i]==1){
                m++;
                pre.push_back(m);
                m=1;
            }
        }
    }

    for(int i=0;i<l;i++){
        if(a[1][i]==1){
            pre.push_back(m);
            m=1; 
        } 
        if(a[1][i]==0){
            if(a[0][i]==0) m++;
            if(a[0][i]==1){
                m++;
                pre.push_back(m);
                m=1;
            }
        }
    }

    sort(pre.begin(),pre.end());
    reverse(pre.begin(),pre.end());

    cout << pre.at(0) << endl;
}