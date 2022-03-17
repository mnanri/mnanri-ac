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
    int n,m,x;
    int c[n];
    int a[n][m];
    for(int i=0;i<n;i++){
        cin >> c[i];
        for(int j=0;j<m;j++) cin >> a[i][j];
    }
    
    vector<vector<int> > l(int(pow(2,n)),vector<int>(m));
    vector<int> cost;
    for(int tmp=0;tmp < (1 << n);tmp++){
        bitset<6> s(tmp);
        vector<int> us(m,0);
        int sum=0;

        for(int i=0;i<n;i++){
            if(s.test(i)) {
                for(int j=0;j<m;j++) us.at(j)=a[i][j];
                sum += c[i];
            }
        }

        l.at(tmp) = us;
        cost.push_back(sum);
    }

    int price=1200001;
    for(int t=0;t<(1<<n);t++){
        int check=1;
        for(int j=0;j<m;j++){
            if(x>l.at(t).at(j)){
                check=0;
                break;;
            }
            if(check){
                price = min(price,cost.at(t)); 
            }
        }
    }

    if(price==1200001){
        cout << -1 <<endl;
    }else{
        cout << price << endl;
    }
}