#include <bits/stdc++.h>
using namespace std;

int n, k, temp, sum = INT_MIN;
vector<int> v;

int main() {
	cin >> n >> k;
	v.resize(n + 1);
	
	for(int i = 1; i <= n; ++i) {
		cin >> temp;
		v[i] = v[i - 1] + temp;
	}
	
	for(int i = k; i <= n; ++i) {
		sum = max(sum, v[i] - v[i - k]);
	}
	
	cout << sum;
		
	return 0;
}
