#include <bits/stdc++.h>
using namespace std;

int m, n, k, lbx, lby, rhx, rhy, cnt, sum;
vector<int> ret;
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

int adj[104][104];
int visited[104][104];

void dfs(int y, int x) {
	visited[y][x] = 1;
	sum++;
	for(int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
		if(adj[ny][nx] || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> m >> n >> k;
	
	while(k--) {
		cin >> lbx >> lby >> rhx >> rhy;
		for(int i = lby; i < rhy; ++i) {
			for(int j = lbx; j < rhx; ++j) {
				if(!adj[i][j]) adj[i][j] = 1;
			}	
		}
	}
	
	for(int i = 0; i < m; ++i) {
		for(int j = 0; j < n; ++j) {
			if(!adj[i][j] && !visited[i][j]) {
				sum = 0;
				cnt++;
				dfs(i, j);
				ret.push_back(sum);
			}
		}
	}
	
	sort(ret.begin(), ret.end());
	
	cout << cnt << "\n";
	
	for(int i = 0; i < cnt - 1; ++i) {
		cout << ret[i] << " ";
	}
	
	cout << ret[cnt - 1];
	
	return 0;
}
