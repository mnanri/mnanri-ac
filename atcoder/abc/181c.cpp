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
    vector<pair<double,double> > con;
    for(int i=0;i<n;i++){
        double x,y;
        cin >> x >> y;
        con.push_back(make_pair(x,y));
    }

    sort(con.begin(),con.end());
    for(int i=0;i<n-2;i++){
        if(con.at(i).first==con.at(i+1).first){
            if(con.at(i).first==con.at(i+2).first){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    for(int i=0;i<n;i++) swap(con[i].first,con[i].second);
    sort(con.begin(),con.end());
    for(int i=0;i<n;i++) swap(con[i].first,con[i].second);
    for(int i=0;i<n-2;i++){
        if(con.at(i).second==con.at(i+1).second){
            if(con.at(i).second==con.at(i+2).second){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            double tmp=(con.at(j).second-con.at(i).second)/(con.at(j).first-con.at(i).first);
            for(int k=j+1;k<n;k++){
                if(con.at(k).second-con.at(j).second==tmp*(con.at(k).first-con.at(j).first)){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
}