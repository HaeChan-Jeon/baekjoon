#include <bits/stdc++.h>
using namespace std;

int temp, inputSum, cnt = 9, sum = 100;
vector<int> v(9);
pair<int, int> p;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < cnt; ++i) {
		cin >> temp;
		v[i] = temp;
		inputSum += temp;
	}
	
	for(int i = 0; i < cnt; ++i) {
		for(int j = i + 1; j < cnt; ++j) {
			if(sum == inputSum - v[i] - v[j]) {
				p = { v[i], v[j] };
				break;
			}
		}
	}
	
	sort(v.begin(), v.end());
	
	for(auto it : v) {
		if(it != p.first && it != p.second) {
			cout << it << "\n";
		}
	}
	
	
	return 0;
}
