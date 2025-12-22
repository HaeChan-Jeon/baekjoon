#include <bits/stdc++.h>
using namespace std;

int n, ret;
string s;

int main() {
	cin >> n;
	
	while(n--) {
		cin >> s;
		stack<char> stk;	
		stk.push(s[0]);

		for(int i = 1; i < s.size(); ++i) {
			if(!stk.empty() && stk.top() == s[i]) {
				stk.pop();
			} else {
				stk.push(s[i]);
			}
		}
		if(stk.empty()) {
			ret++;
		}
	}
	
	cout << ret;
	
	return 0;
}
