#include <bits/stdc++.h>
using namespace std;

int n, m, y, x, ny, nx;
string s;

int visited[104][104];

vector<int> adj[104];
queue<pair<int, int>> que;

const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void bfs() {
	visited[0][0] = 1;
	que.push({0, 0});
	
	while(!que.empty()) {
		tie(y, x) = que.front(); que.pop();
		for(int i = 0; i < 4; ++i) {
			ny = y + dy[i];
			nx = x + dx[i];
			if(ny < 0 || nx < 0 || ny >= n || nx >= m || !adj[ny][nx] || visited[ny][nx]) {
				continue;
			}
			que.push({ny, nx});
			visited[ny][nx] = visited[y][x] + 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; ++i) {
		cin >> s;
		for(int j = 0; j < m; ++j) {
			adj[i].push_back(s[j] - '0');
		}
	}
	
	bfs();
	
	
	cout << visited[n - 1][m - 1];
	return 0;
}
