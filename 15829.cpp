//Hashing

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

	long long r = 1;
	long long mod = 1234567891;

	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int> as;
	for (int i = 0; i < n; i++)
		as.push_back(s[i] - 96);
	long long answer = 0;
	for (int i = 0; i < n; i++) {
		answer += r * as[i];
		answer %= mod;
		r *= 31;
		r %= mod;
	}

	cout << answer;

	return 0;
}