//2 x n Ÿ?ϸ?

#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void d_n(int n) {
	v.push_back((v[n - 1] + v[n - 2]) % 10007);
}

int main() {
	int n;
	cin >> n;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	for (int i = 3; i <= n; i++)
		d_n(i);
	cout << v[n];
}