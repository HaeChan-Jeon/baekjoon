#include <bits/stdc++.h>
using namespace std;

int n, m, ret;
string dump, type;
map<string, int> _map;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	while(n--) {
		cin >> m;
		while(m--) {
			cin >> dump >> type;
			_map[type]++;
		}
		
		ret = 1;
		for(auto it : _map) {
			ret *= (it.second + 1);
		}
		ret -= 1;
		cout << ret << "\n";
		_map.clear();
	}
	
	return 0;
}
