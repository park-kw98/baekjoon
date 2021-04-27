#include <iostream>
using namespace std;


int gcd(int a, int b) {
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a % b);
	}
}
int main() {

	int a[2];
	int b[2];

	cin >> a[0] >> a[1] >> b[0] >> b[1];

	int c[2];
	c[0] = a[1] * b[0] + a[0] * b[1];
	c[1] = a[1] * b[1];
	int tmp = gcd(c[1], c[0]);
	c[0] = c[0] / tmp;
	c[1] = c[1] / tmp;
	cout << c[0] << " " << c[1] << "\n";
	return 0;

}