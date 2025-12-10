#include<bits/stdc++.h>
using namespace std;

int n;
string s;
map<char, int> m;
bool check;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	for(int i = 0; i < n; ++i) {
		cin >> s;
		m[s[0]]++;
	}
	
	for(auto it : m) {
		if (it.second >= 5) {
			 cout << it.first;
			 check = true;
		}
	}
	
	if(!check) {
		cout << "PREDAJA";
	}
	
	return 0;
}
