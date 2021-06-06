//숫자의 개수

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int su = a * b * c;
	int left[10] = { 0, };
	while (su > 0) {
		int tmp = su % 10;
		left[tmp]++;
		su = su / 10;
	}
	for (int i = 0; i < 10; i++)
		cout << left[i] << "\n";

	return 0;
}