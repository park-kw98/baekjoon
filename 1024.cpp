#include <iostream>
using namespace std;


int main() {
	int n, l;
	int i;
	int c = -1;
	cin >> n >> l;
	for (int k = l-1; k < 100; k++) {
		if ((2*n - k*(k + 1)) % (2*k + 2) == 0 && (2 * n - k * (k + 1))>= 0) {
			i = (2 * n - k * (k + 1)) / (2 * k + 2);
			c = k;

			break;
		}
	}
	if (c == -1) {
		cout << -1 << "\n";
	}
	for (int k = 0; k < c+1; k++) {
		cout << i + k << " ";
	}
	cout << "\n";

	return 0;
}