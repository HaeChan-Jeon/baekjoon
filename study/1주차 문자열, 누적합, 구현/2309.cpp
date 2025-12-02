#include <bits/stdc++.h>
using namespace std;

const int inputCount = 9;
const int r = 7;
vector<int> inputVector;
bool found = false;

void print(vector<int> v) {
	sort(v.begin(), v.end());
	
	for(int i = 0; i < r - 1; ++i) {
		cout << v[i] << '\n';
	}
	cout << v[6];
}

void combi(int start, int sum, vector<int> v) {
	if(found) {
		return;
	}
	
	if(sum > 100) {
		return;
	}
	
	if(v.size() == r && sum == 100) {
		print(v);
		found = true;
		return;
	}
	
	for(int i = start + 1; i < inputCount; ++i) {
		v.push_back(inputVector[i]);
		sum += inputVector[i];
		combi(i, sum, v);
		sum -= inputVector[i];
		v.pop_back();
	}
}

int main() {
	int input;
	vector<int> v;
	
	for(int i = 0; i < inputCount; ++i) {
		cin >> input;
		inputVector.push_back(input);
	}
	
	combi(-1, 0, v);

	return 0;
}
