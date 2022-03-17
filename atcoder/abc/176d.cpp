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

char s[1000][1000];
bool r[1000][1000];

void search(int x, int y, int h, int w){
    if(x<0 || x>=w || y<0 || y>=0 || s[x][y]=='#') return;
    
    if(r[x][y]) return;

    r[x][y] = true;

    search(x+1,y,h,w);
    search(x-1,y,h,w);
    search(x,y+1,h,w);
    search(x,y-1,h,w);
}

int main(){
    int h,w;
    cin >> h >> w;
    int cx,cy,dx,dy;
    cin >> cy >> cx >> dy >> dx;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++) {
            cin >> s[i][j];
            s[i][j] = false;
        }
    }

    search(cx,cy,h,w);

    if(r[dx-1][dy-1]){
        cout << 0 << endl;
    }else{
        cout << -1 << endl;
    }
}