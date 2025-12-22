#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll a, b, c;

ll go(ll b) {
	ll ret;
	if(b == 1) return a % c;
	ret = go(b / 2) % c;
	ret = (ret * ret) % c;
	if(b & 1) ret = (ret * a) % c;
	return ret;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> a >> b >> c;
	cout << go(b);
	
	return 0;
}
