#include <bits/stdc++.h>
using namespace std;

const string y = "DA";
const string n = "NE";
const char* ptn = "*";

int cnt, sSize, eSize;
string input, s, e;
vector<string> v;

int main(){
	cin >> cnt >> input;
	v.resize(cnt);
	for(int i = 0; i < cnt; ++i) {
		cin >> v[i];
	}
	
	auto pos = input.find(ptn);
	s = input.substr(0, pos);
	e = input.substr(pos + 1);
	sSize = s.size();
	eSize = e.size();
	
	for(int i = 0; i < cnt; ++i) {
		if((sSize + eSize) > v[i].size()) {
			cout << n;
		} else {
			if(s == v[i].substr(0, sSize) && e == v[i].substr(v[i].size() - eSize)) {
				cout << y;
			} else {
				cout << n;
			}
		}
	}
}
