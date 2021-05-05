#include <iostream>
using namespace std;

int main() {

	int num[9];
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}
	int large = num[0];
	int wh = 0;
	for (int i = 1; i < 9; i++) {
		if (num[i] > large) {
			wh = i;
			large = num[i];
		}
	}
	cout << large << "\n" << wh + 1;

	return 0;
}