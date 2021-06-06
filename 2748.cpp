//피보나치 수 2

#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<long long> v;
	int n;
	cin >> n;
	v.push_back(0);
	v.push_back(1);
	for (int i = 2; i <= n; i++) {
		v.push_back(v[i - 1] + v[i - 2]);
	}
	cout << v[n];
	return 0;
}