#include<bits/stdc++.h>
using namespace std;

vector<int> result(26, 0);

void print() {
	for(const int it : result) {
		cout << it << ' ';
	}
}

void answer(const string& input) {
	for(int i = 0; i < input.size(); ++i) {
		result[((int)input[i]) - 97]++;
	}
	print();
}

int main() {
	string input;
	cin >> input;
	answer(input);
	return 0;
}
