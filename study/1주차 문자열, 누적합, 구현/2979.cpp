#include<bits/stdc++.h>
using namespace std;

vector<int> times(101, 0);

int main() {
	int a, b, c;
	int in, out;
	int result = 0;
	
	cin >> a >> b >> c;
	
	b *= 2;
	c *= 3;
	
	for(int i = 0; i < 3; ++i) {
		cin >> in >> out;
		
		for(int j = in; j < out; ++j) {
			times[j]++;
		}
	}
	
	for(const int it : times) {
		if(it == 0) {
			continue;
		}
		else if(it == 1) {
			result += a;
		}
		else if(it == 2) {
			result += b;
		}
		else if(it == 3) {
			result += c;
		}
	}
	
	cout << result;
	
	return 0;
}
