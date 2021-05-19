//소수 찾기

//주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.
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