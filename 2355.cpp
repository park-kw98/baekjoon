#include <iostream>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	if (a > b) {
		cout << (a + b) * (a - b + 1) / 2;
	}
	else
		cout << (b + a) * (b - a + 1) / 2;

	return 0;
}