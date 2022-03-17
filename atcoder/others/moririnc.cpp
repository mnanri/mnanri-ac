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
    int a[9][9];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> a[i][j];
        }          
    }
    

    for(int i=0;i<9;i++){
        int sum =0;
        for(int j=0;j<9;j++){
            sum += a[i][j];
        }
        for(int j=0;j<9;j++){
            if(a[i][j]==0) a[i][j]=45-sum;
        }   
    }

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout << a[i][j] << ' ';
        }   
        cout << endl;
    }
}