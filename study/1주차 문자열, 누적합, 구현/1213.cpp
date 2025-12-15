#include <bits/stdc++.h>
using namespace std;

string s, temp, ret;
const string fail = "I'm Sorry Hansoo";
map<char, int> _map;
bool toggle;
char middle;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> s;
	
	for(int i = 0; i < s.size(); ++i) {
		_map[s[i]]++;
	}
	
	for(auto it : _map) {
		if(it.second % 2) {
			if(toggle) {
				cout << fail;
				exit(0);
			}
			middle = it.first;
			toggle = true;
		}
		for(int i = 0; i < it.second / 2; ++i) {
			ret += it.first;
		}
	}
	
	temp = ret;
	reverse(temp.begin(), temp.end());

	if(middle) {
		cout << "true";
		ret += middle;
	}

	
	ret += temp;
	
	cout << ret;
	
	return 0;
}
