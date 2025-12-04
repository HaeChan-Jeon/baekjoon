#include <bits/stdc++.h>
using namespace std;

const string err = "I'm Sorry Hansoo";

string s;
string ret;
map<char, int> mp;
bool useMid;
char mid;
int sz;

int main() {
	cin >> s;
	
	for(int i = 0; i < s.size(); i++) {
		mp[s[i]]++;
	}
	
	for(auto it : mp) {
		if(it.second % 2 != 0) {
			if(useMid) {
				cout << err;
				exit(0);
			}
			mid = it.first;
			useMid = true;
			
			if(it.second == 1) {
				continue;
			}
		}
		
		for(int i = 0; i < it.second / 2; i++) {
				ret += it.first;
		}
	}

	sz = ret.size();

	if(useMid) {
		ret += mid;
	}
	
	for(int i = sz - 1; i >= 0; i--) {
		ret += ret[i];
	}
		
	cout << ret;
}
