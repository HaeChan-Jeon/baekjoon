#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> s;
	
	for(int i = 0; i < s.size(); ++i) {
		a[s[i] - 97]++;
	}
	
	for(auto it : a) {
		cout << it << " ";
	}
}
