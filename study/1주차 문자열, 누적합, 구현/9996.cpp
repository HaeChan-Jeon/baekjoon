#include<bits/stdc++.h>
using namespace std;

int n;
string str, temp, a, b;
vector<bool> ret;

const string yes = "DA", no = "NE";
const char* p = "*";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> str;
	
	ret.resize(n);
	
	size_t pp = str.find(p);
	a = str.substr(0, pp);
	b = str.substr(pp + 1);
	
	for(int i = 0; i < n; ++i) {
		cin >> temp;
		if (temp.size() < a.size() + b.size()) continue;	
		
		if(a == temp.substr(0, a.size()) && b == temp.substr(temp.size() - b.size()))
			ret[i] = true;
	}

	for (bool it : ret) {
		if(it) cout << yes << "\n";
		else cout << no << "\n";
	}
	
	return 0;
}
