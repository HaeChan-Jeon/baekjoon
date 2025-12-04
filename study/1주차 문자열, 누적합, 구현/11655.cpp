#include <bits/stdc++.h>
using namespace std;

string s;



// 65 ~ 90
// 97 ~ 122

int main() {
	getline(cin, s);
	
	for(int i = 0; i < s.size(); ++i) {
		if(s[i] > 64 && s[i] < 91) {
			if((int)(s[i] + 13) > 90) {
				s[i] -= 26;
			}
			s[i] += 13;
		}
		
		if(s[i] > 96 && s[i] < 123) {
			if((int)(s[i] + 13) > 122) {
				s[i] -= 26;
			}
			s[i] += 13;
		}
	}
	
	cout << s;
}
