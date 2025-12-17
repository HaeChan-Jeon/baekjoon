#include <bits/stdc++.h>
using namespace std;

int n, ret;
string s;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	
	while(n--) {
		stack<char> stk;
		cin >> s;
		
		stk.push(s[0]);
		
		for(int i = 1; i < s.size(); ++i) {
			if(!stk.empty() && stk.top() == s[i]) {
				stk.pop(); continue;
			}
			stk.push(s[i]);
		}
		
		if(stk.empty()) ret++;
	}
	
	cout << ret;
	
	return 0;
}
