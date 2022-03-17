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
using intl = int64_t;
using graph = vector<vector<int> >;
int main(){
    string s,t;
    cin >> s >> t;
    vector<string> a(s.size()-t.size()+1);
    for(int i=0;i<a.size();i++){
        for(int j=i;j<i+t.size();j++){
            a[i].push_back(s.at(j));
        }
    }

    int match=0;
    for(int i=0;i<a.size();i++){
        int tmp=0;
        for(int j=0;j<t.size();j++){
            if(a[i].at(j)==t.at(j)) tmp++; 
        }
        match = max(match,tmp);
    }

    cout << t.size()-match << endl;
}