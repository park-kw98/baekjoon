//»ó¼ö

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int num1[3];
	int num2[3];
	for (int i = 0; i < 3; i++) {
		num1[i] = a % 10;
		num2[i] = b % 10;
		a = a / 10;
		b = b / 10;
	}
	int tmp1 = num1[0] * 100 + num1[1] * 10 + num1[2];
	int tmp2 = num2[0] * 100 + num2[1] * 10 + num2[2];
	int result = (tmp1 > tmp2) ? tmp1 : tmp2;
	cout << result;

	return 0;
}