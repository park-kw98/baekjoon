#include <iostream>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	int tmp;
	while (true) {
		cin >> tmp;
		if (tmp == 0)
			break;
		if (tmp % n == 0) {
			cout << tmp << " is a multiple of " << n << ".\n";
		}
		else {
			cout << tmp << " is NOT a multiple of " << n << ".\n";
		}
	}


	return 0;
}