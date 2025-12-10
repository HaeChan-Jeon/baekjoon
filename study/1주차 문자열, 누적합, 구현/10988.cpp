#include <bits/stdc++.h>
using namespace std;

string str;
int sz, mid;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> str;
	sz = str.size();
	mid = sz / 2 + sz % 2;
	
	for(int i = 0; i < mid; ++i) {
		if(str[i] != str[sz - i - 1]) {
			cout << 0;
			exit(0);
		}
	}
	cout << 1;
		
	return 0;
}
