#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"
#include "numeric"
#include "cassert"
#include "ctime"

using namespace std;

constexpr long long int MOD = 1000000007;
//constexpr int MOD = 1000000007;
//constexpr int MOD = 998244353;
//constexpr long long int MOD = 998244353;
constexpr double EPS = 1e-12;

//int N, M, K, T, H, W, L, R;
long long int N, M, K, T, H, W, L, R;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> H >> W;
	int sy, sx, gy, gx;
	cin >> sy >> sx >> gy >> gx;
	sy--, sx--, gy--, gx--;
	vector<string>s(H);
	for (auto &i : s)cin >> i;
	vector<vector<int>>dis(H, vector<int>(W,MOD));
	deque<pair<int, int>>Q;
	Q.push_back({ sy,sx });
	dis[sy][sx] = 0;
	int dir[] = { 1,0,-1,0,1 };
	while (!Q.empty()) {
		int cy, cx;
		tie(cy, cx) = Q.front();
		Q.pop_front();
		for (int i = 0; i < 4; i++) {
			int ny = cy + dir[i];
			int nx = cx + dir[i + 1];
			if (ny < 0 || nx < 0 || ny >= H || nx >= W)continue;
			if (s[ny][nx] == '#')continue;
			if (dis[ny][nx] > dis[cy][cx]) {
				dis[ny][nx] = dis[cy][cx];
				Q.push_front({ ny,nx });
			}
		}
		for (int i = -2; i <= 2; i++) {
			for (int j = -2; j <= 2; j++) {
				int ny = cy + i;
				int nx = cx + j;
				if (ny < 0 || nx < 0 || ny >= H || nx >= W)continue;
				if (s[ny][nx] == '#')continue;
				if (dis[ny][nx] > dis[cy][cx] + 1) {
					dis[ny][nx] = dis[cy][cx] + 1;
					Q.push_back({ ny,nx });
				}
			}
		}
	}
	if (dis[gy][gx] == MOD)dis[gy][gx] = -1;
	cout << dis[gy][gx] << endl;
}
