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
    int n,m;
    cin >> n >> m;
    vector<int> h;
    vector<int> w;
    for(int i=0;i<n;i++){
        int e;
        cin >> e;
        h.push_back(e);
    }
    sort(h.begin(),h.end());
    for(int i=0;i<m;i++){
        int c;
        cin >> c;
        w.push_back(c);
    }

    vector<pair<int,int> > p;
    for(int i=0;i<n;i++) p.push_back(make_pair(h.at(i),1));
    for(int i=0;i<m;i++) p.push_back(make_pair(w.at(i),0));

    vector<int> odd;
    for(int i=0;i<n;i+=2) odd.push_back(h.at(i+1)-h.at(i));
    vector<int> eve;
    for(int i=1;i<n-1;i+=2) eve.push_back(h.at(i+1)-h.at(i));
    vector<int> oddsum(odd.size(),0);
    oddsum.at(0)=odd.at(0);
    for(int i=1;i<oddsum.size();i++) oddsum[i]=oddsum[i-1]+odd[i];
    vector<int> evesum(eve.size(),0);
    evesum.at(0)=eve.at(0);
    for(int i=1;i<eve.size();i++) evesum[i]=evesum[i-1]+eve[i];

    int sum=abs(w.at(0)-h.at(0))+evesum[evesum.size()-1];
    for(int i=0;i<p.size();i++){
        if(p.at(i).second){
            int tmp=i;
            while(i>-1 && p.at(i).second){
                tmp--;
            }
            
        }
    }
}