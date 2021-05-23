//소수 구하기
//에라스토테네스의 체..!

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int* sosu = new int[m+1];

	for (int i = 0; i < m + 1; i++)
		sosu[i] = i;
	for (int i = 2; i <= m; i++) {
		if (sosu[i] == 0)
			continue;
		for (int j = 2 * i; j <= m; j+= i) {
			sosu[j] = 0;
		}
	}
	if (n == 1) n++;
	for (int i = n; i <= m; i++) {
		if (sosu[i] != 0)
			cout << sosu[i] << "\n";
	}

	return 0;
}