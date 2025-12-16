#include <bits/stdc++.h>
using namespace std;

int n, m;
string s;
map<string, int> m1;
map<int, string> m2;
vector<int> ret;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; ++i) {
		cin >> s;
		m1[s] = i + 1;
		m2[i + 1] = s;
	}

	while(m--) {
		cin >> s;
		if(atoi(s.c_str())) {
			cout << m2[atoi(s.c_str())] << "\n";
		} else {
			cout << m1[s] << "\n";
		}
	}

	return 0;
}
