#include<iostream>
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
    int n;
    cin >> n;
    vector<int> L;
    int i;
    int l;
    for(i=0;i<n;i++){
        cin >> l;
        L.push_back(l);
    }
    sort(L.begin(),L.end());
    int counter =0;
    int j,k;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(L.at(i)==L.at(j)) continue;
            for(k=j;k<n;k++){
                if(L.at(j)==L.at(k)) continue;
                if(L.at(i)+L.at(j)>L.at(k)) counter++;
            }
        }
    }
    cout << counter << endl;
}