//acm хёез

#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int h, m, n;
		cin >> h >> m >> n;
		if (n % h == 0) {
			cout << h * 100 + n / h;
		}
		else {
			cout << n % h * 100 + n / h + 1;
		}
		cout << endl;
	}

	return 0;
}