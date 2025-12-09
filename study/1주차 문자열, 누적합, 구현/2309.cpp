#include <bits/stdc++.h>
using namespace std;

int temp;
vector<int> b(9);

void combi(int start, vector<int> ret, int sum) {
	if(sum > 100) {
		return;
	}
	
	if(ret.size() == 7) {
		if(sum == 100) {
			sort(ret.begin(), ret.end());
			for(auto it : ret) cout << it << "\n";
			exit(0);
		}
	}
	
	
	for(int i = start + 1; i < 9; i++) {
		ret.push_back(b[i]);
		sum += b[i];
		combi(i, ret, sum);
		sum -= b[i];
		ret.pop_back();
	}
}

int main() {
	for(int i = 0; i < 9; i++) {
		cin >> temp;
		b[i] = temp;
	}
	
	vector<int> ret;
	int sum = 0;
	
	combi(-1, ret, sum);
	return 0;
}
