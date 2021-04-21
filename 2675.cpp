#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a;
		string b;
		cin >> a >> b;
		for (int j = 0; j < b.length(); j++) {
			for (int k = 0; k < a; k++) {
				cout << b[j];
			}
		}
		cout << "\n";
	}
	return 0;
}