#include <bits/stdc++.h>
using namespace std;

int t, m, n, k, y, x, ret;

int visited[54][54];
int adj[54][54];

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x) {
	visited[y][x] = 1;
	
	for(int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m || !adj[ny][nx] || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> t;
	
	while(t--) {
		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		fill(&adj[0][0], &adj[0][0] + 54 * 54, 0);
		
		ret = 0;
		cin >> m >> n >> k;
		
		while(k--) {
			cin >> x >> y;
			adj[y][x] = 1;
		}
		
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				if(adj[i][j] && !visited[i][j]) {
				    ret++;
				    dfs(i, j);
				}
			}			
		}
		
		cout << ret << "\n";
	}
	
	return 0;
}
