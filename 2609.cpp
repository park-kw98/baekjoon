//최대공약수와 최소공배수
//두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

#include <iostream>
using namespace std;

int main() {

	int a;
	int b;
	cin >> a >> b;
	int A = a;
	int B = b;
	int tmp;
	if (b > a) {
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b != 0) {
		tmp = a % b;
		a = b;
		b = tmp;
	}
	cout << a << "\n";
	cout << A / a * B << "\n";

	return 0;
}