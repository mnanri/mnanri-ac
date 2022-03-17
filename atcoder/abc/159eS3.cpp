#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define per(i,a,b) for(int i=a;i>=b;i--)
#define rusha() scanf("%d",&n);rep(i,1,n)scanf("%d",&a[i]);
#define rushb() scanf("%d",&t);while(t--)
#define debug(x) cout<<"LBWNB    "<<x<<"---\n"
#define pb push_back
#define pii pair<int,int>
#define fi first
#define se second
#define mp make_pair
#define p() puts("")
#define mem(a,b) memset(a,b,sizeof a)
#define all(x) (x.begin(),x.end())
using namespace std;
typedef long long ll;
const int mod=998244353;
const int inf=1e9+7;
const int maxn=2e5+10;
int t,n,m,k;
int a[12][1024];
int b[12][1024];
int main(){
    scanf("%d%d%d",&n,&m,&k);
    rep(i,1,n) rep(j,1,m) scanf("%1d",&a[i][j]);
    int g=(1<<n)-1;
    int sum=inf;
    rep(p,0,g){
         rep(i,1,n) rep(j,1,m) b[i][j]=0;
         int d=1,s=0;
         rep(i,1,n){
            rep(j,1,m) b[d][j]+=a[i][j];
            if(p&(1<<(i-1))) d=i+1,s++;
         }
         ///printf("%d:\n",p);
         ///rep(i,1,n) {rep(j,1,m) printf("%d",b[i][j]);puts("");}
         rep(j,1,m){
             bool f=1,ff=0;
             rep(i,1,n){
                if(b[i][j]>k) ff=1;
                if(b[i][j]+b[i][j-1]>k) f=0;
            }
            if(ff) {s=inf;break;}
            if(f)  rep(i,1,n) b[i][j]+=b[i][j-1];
            else s++;
         }
         ///printf("%d:%d\n\n",p,s);
         sum=min(sum,s);
    }
    printf("%d\n",sum);
    return 0;
}
