#include <bits/stdc++.h>
using namespace std;

vector<int> v(9);
int sum;
bool check;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	for(int i = 0; i < 9; ++i) {
		cin >> v[i];
		sum += v[i];
	}
	
	for(int i = 0; i < 9; ++i) {
		if(check) break;
		
		for(int j = i + 1; j < 9; ++j) {
			if((sum - v[i] - v[j]) == 100) {
				v[i] = v[j] = -1;
				check = true;
				break;
			}
		}
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 2; i < 9; ++i) {
		cout << v[i] << "\n";
	}
	
	return 0;
}
