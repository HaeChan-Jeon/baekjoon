#include <bits/stdc++.h>
using namespace std;

int n, k, temp, ret = INT_MIN;
vector<int> v;

int main(){
	cin >> n >> k;
	v.resize(n + 1);

	for(int i = 1; i <= n; i++) {
		cin >> temp; v[i] = v[i - 1] + temp;
	}
	
	for(int i = k; i <= n; i++) {
		ret = max(ret, v[i] - v[i - k]);
	}
	
	cout << ret;
}
