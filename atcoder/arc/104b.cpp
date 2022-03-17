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
    string s;
    cin >> n >> s;
    vector<vector<int> > dna(n+1,vector<int>(4,0));

    int a=0,t=0,c=0,g=0;
    for(int i=0;i<n;i++){
        if(s.at(i)=='A') a++;
        if(s.at(i)=='T') t++;
        if(s.at(i)=='C') c++;
        if(s.at(i)=='G') g++;
        dna.at(i+1).at(0)=a;
        dna.at(i+1).at(1)=t;
        dna.at(i+1).at(2)=c;
        dna.at(i+1).at(3)=g;
    }

    ll cnt=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n+1;j++){
            if((dna.at(j).at(0)-dna.at(i-1).at(0))==(dna.at(j).at(1)-dna.at(i-1).at(1)) && (dna.at(j).at(2)-dna.at(i-1).at(2))==(dna.at(j).at(3)-dna.at(i-1).at(3))) cnt++;
        }
    }

    cout << cnt << endl;
}