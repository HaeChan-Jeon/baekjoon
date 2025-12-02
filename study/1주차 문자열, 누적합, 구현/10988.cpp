#include<bits/stdc++.h>
using namespace std;

void answer(const string& input) {
	bool result;
	int length = input.size();
	
	for(int i = 0; i < (length + 1) / 2; ++i) {
		if(input[i] != input[length - i - 1]) {
			cout << result;
			return;
		}
	}
	
	result = true;
	cout << result;
}

int main() {
	string input;
	cin >> input;
	answer(input);
	return 0;
}
