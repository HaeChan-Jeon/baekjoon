#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);
	
    int n;
    cin >> n;

    map<char, int> cnt;
    
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        cnt[s[0]]++;
    }

    string res = "";
    for(auto& p : cnt) {
        if(p.second >= 5) {
			res.push_back(p.first);
		}
    }

    if(res.empty()) {
		cout << "PREDAJA";
	}
    else {
    	cout << res;
	}

    return 0;
}
