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
int main(){
    int x,y,a,b,c;
    cin >> x >> y >> a >> b >> c;
    vector<int64_t> p,q,r;
    for(int i=0;i<a;i++) {
        int64_t s;
        cin >> s;
        p.push_back(s);
    }
    for(int i=0;i<b;i++) {
        int64_t s;
        cin >> s;
        q.push_back(s);
    }
    for(int i=0;i<c;i++) {
        int64_t s;
        cin >> s;
        r.push_back(s);
    }

    sort(p.begin(),p.end());
    reverse(p.begin(),p.end());
    /* cout << endl;
    for(int i=0;i<a;i++) cout << p.at(i); */
    sort(q.begin(),q.end());
    reverse(q.begin(),q.end());
    sort(r.begin(),r.end());
    reverse(r.begin(),r.end());

    int64_t sum=0;
    for(int i=0;i<x;i++){
        sum += p.at(i);
    }

    for(int i=0;i<y;i++){
        sum += q.at(i);
    }

    /* cout << endl;
    cout << sum << endl; */

    int counta=x-1,countb=y-1,countc=0;
    while(r.at(countc)>p.at(counta) || r.at(countc)>q.at(countb)){
        if(p.at(counta)>=q.at(countb)){
            sum = sum + r.at(countc) - q.at(countb);
            countc++;
            countb--;
            if(countb==-1 || countc==c) break;
        }else{
            sum = sum + r.at(countc) - p.at(counta);
            countc++;
            counta--;
            if(counta==-1 || countc==c) break;
        }
    }

    if(counta==-1 && countc<c && r.at(countc)>q.at(countb)){
        while(r.at(countc)>q.at(countb)){
            sum = sum + r.at(countc) - q.at(countb);
            countc++;
            countb--;
            if(countb==-1 || countc==c) break;
        }
    }

    if(countb==-1 && countc<c && r.at(countc)>p.at(counta)){
        while(r.at(countc)>q.at(counta)){
            sum = sum + r.at(countc) - p.at(counta);
            countc++;
            counta--;
            if(counta==-1 || countc==c) break;
        }
    }

    cout << sum << endl;
}