//�Ҽ� ã��

//�־��� �� N�� �߿��� �Ҽ��� �� ������ ã�Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int n;
	cin >> n;
	int* N = new int[n];
	for (int i = 0; i < n; i++)
		cin >> N[i];
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (N[i] == 1)
			count++;
		for (int j = 2; j <= sqrt(N[i]); j++) {
			if (N[i] % j == 0) {
				count++;
				break;
			}
		}
	}
	cout << n - count << "\n";

	return 0;
}