#include <bits/stdc++.h>
using namespace std;

int n, h, temp, ret;
int adj[104][104];
int visited[104][104];

const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};

void dfs(int y, int x) {
	visited[y][x] = 1;
	for(int i = 0; i < 4; ++i) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if(adj[ny][nx] <= h || visited[ny][nx]) continue;
		dfs(ny, nx);
	}
	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < n; ++j) {
			cin >> adj[i][j];
		}
	}
	
	for(int i = 0; i <= 100; ++i) {
		h = i;
		fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
		temp = 0;
		for(int y = 0; y < n; ++y) {
			for(int x = 0; x < n; ++x) {
				if(adj[y][x] > h && !visited[y][x])
				{
					dfs(y, x);
					temp++;
				}
			}
		}
		ret = max(ret, temp);
	}
	
	cout << ret;

	return 0;
}
