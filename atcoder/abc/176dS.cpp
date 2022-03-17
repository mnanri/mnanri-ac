#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
const int INF=1<<30;
typedef pair<int,int>P;
typedef pair<int,P>PP;
int main(){
  int h,w;
  int sx,sy;
  int gx,gy;
  char maps[1005][1005];
  int min_cost[1005][1005]={0};
  cin>>h>>w;
  cin>>sy>>sx;
  sy--;sx--;
  cin>>gy>>gx;
  gy--;gx--;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin>>maps[i][j];
      min_cost[i][j]=INF;
    }
  }
  
  int dx[4]={0,1,0,-1};
  int dy[4]={-1,0,1,0};
  min_cost[sy][sx]=0;
  priority_queue<PP,vector<PP>,greater<PP> >pq;
  pq.push(PP(0,P(sx,sy)));
  while(!pq.empty()){
    PP pos=pq.top();pq.pop();
    int x=pos.second.first;
    int y=pos.second.second;
    int cost=pos.first;
    if(cost>min_cost[y][x])continue;
    for(int i=0;i<4;i++){
      int nx=x+dx[i];
      int ny=y+dy[i];
      if(0<=nx&&nx<w&&0<=ny&&ny<h&&maps[ny][nx]!='#'){
	if(cost<min_cost[ny][nx]){
	  min_cost[ny][nx]=cost;
	  pq.push(PP(cost,P(nx,ny)));
	}
      }
    }
    for(int i=-2;i<=2;i++){
      for(int j=-2;j<=2;j++){
	int nx=x+i;
	int ny=y+j;
	if(0<=nx&&nx<w&&0<=ny&&ny<h&&maps[ny][nx]!='#'){
	  if(cost+1<min_cost[ny][nx]){
	    min_cost[ny][nx]=cost+1;
	    pq.push(PP(cost+1,P(nx,ny)));
	  }
	}
      }
    }
  }

  if(min_cost[gy][gx]==INF){
    cout<<-1<<endl;
  }else{
    cout<<min_cost[gy][gx]<<endl;
  }
  return(0);
}
