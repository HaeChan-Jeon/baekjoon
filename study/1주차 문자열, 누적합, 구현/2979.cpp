#include <bits/stdc++.h>
using namespace std;

int a, b, c, s, e, sum;
int ar[101];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> a >> b >> c;
	
	for(int i = 0; i < 3; i++) {
		cin >> s >> e;
		for(int j = s; j < e; j++) {
			ar[j]++;
		}
	}

	for(int i = 1; i <= 101; i++) {
		if(ar[i] == 0) {
			continue;
		}
		else if(ar[i] == 1) {
			sum += a;
		}
		else if(ar[i] == 2) {
			sum += (b * 2);
		}
		else {
			sum += (c * 3);
		}
	}
	
	cout << sum;
	
	return 0;
}
