//�ִ������� �ּҰ����
//�� ���� �ڿ����� �Է¹޾� �ִ� ������� �ּ� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

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