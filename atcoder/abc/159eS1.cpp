//love yjl forever
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
const int INF=0x3f3f3f3f,N=10+5,M=1000+5;
int n,m,K;
int a[N][M],s[N][M];
int sum(int x,int y,int xa,int ya)
{
	return s[xa][ya]-s[xa][y-1]-s[x-1][ya]+s[x-1][y-1];
}
int dp[N][M],b[N];
bool ok(int mid,int jl)
{
	int last=0;
	int t=0;
	for(int i=1;i<=n;i++)
	{
		if(b[i]) 
		{
			t=max(t,sum(last+1,jl+1,i,mid));
			last=i;
		}
	}
	return t<=K;
}
void print()
{
	int i;
	for(i=1;i<=n;i++)	
		cout<<b[i]<<" ";
	cout<<endl;
}
int main()
{
/*	freopen("","r",stdin);
	freopen("","w",stdout);*/
	int i,j,k;
	scanf("%d %d %d ",&n,&m,&K);
	char c;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			c=getchar();
			a[i][j]=c-'0';
			s[i][j]=s[i][j-1]+s[i-1][j]-s[i-1][j-1]+a[i][j];
		}
		c=getchar();
	}
	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=m;j++)
//			cout<<s[i][j]<<" ";
//		cout<<endl;
//	}
//	cout<<sum(2,2,3,4);
	int ans=INF;b[n]=1;
	for(int msk=0;msk<(1<<(n-1));msk++)
	{
		int tmp=0;
		for(i=0;i<n-1;i++)
		{
			if((msk>>i)&1) b[i+1]=1,tmp++;
			else b[i+1]=0;
		}
		j=0;
		int f=1;
		while(j!=m)
		{
			int l=j+1,r=m,an=0;
			while(l<=r)
			{
				int mid=l+r>>1;
				if(ok(mid,j))
				{
					l=mid+1;
					an=mid;
				}
				else 
					r=mid-1;
			}
			
			if(an==0){
				f=0;
				break;
			}
			
			j=an;
			if(j!=m)
				tmp++;
		}
		if(f==0) continue;
		ans=min(ans,tmp);
	}
	cout<<ans<<endl;
}
