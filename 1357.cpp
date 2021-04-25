#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int Rev(int x) {
	int c = 0;
	int tm = x;
	while (tm/10 > 0) {
		tm = tm / 10;
		c++;
	}
	//321->2
	int *tmp = new int[c + 1];
	for (int i = 0; i < c + 1; i++) {
		tmp[i] = x / pow(10, c - i);
		x = x - tmp[i] * pow(10, c - i);
	}
	reverse(tmp, tmp + c + 1);
	int rev_x = 0;
	for (int i = 0; i < c + 1; i++) {
		rev_x = rev_x + tmp[i] * pow(10, c - i);
	}
	return rev_x;

}

int main() {
	int x, y;
	cin >> x >> y;
	cout << Rev(Rev(x) + Rev(y));
	return 0;
}