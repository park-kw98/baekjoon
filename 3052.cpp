//³ª¸ÓÁö

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num[10];
	for (int i = 0; i < 10; i++)
		cin >> num[i];
	int left[42] = { 0, };
	for (int i = 0; i < 10; i++)
		left[num[i] % 42]++;
	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (left[i] != 0)
			cnt++;
	}
	cout << cnt;
	return 0;
}