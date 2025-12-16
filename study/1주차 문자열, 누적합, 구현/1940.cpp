#include <bits/stdc++.h>
using namespace std;

int n, m, ret;
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	v.resize(n);
	for(int i = 0; i < n; ++i) cin >> v[i];
	
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(v[i] + v[j] == m) ret++;
		}
	}
	
	cout << ret;
	
	return 0;
}
