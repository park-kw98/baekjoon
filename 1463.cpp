//1로 만들기

#include <iostream>
#include <cmath>
using namespace std;
int arr[1000001];
void d(int n) {
	if (n % 6 == 0) arr[n] = min(min(arr[n / 3], arr[n / 2]), arr[n - 1]) + 1;
	else if (n % 2 == 0) arr[n] = min(arr[n / 2], arr[n - 1]) + 1;
	else if (n % 3 == 0) arr[n] = min(arr[n / 3], arr[n - 1]) + 1;
	else arr[n] = arr[n - 1] + 1;
}
int main() {
	int n;
	cin >> n;
	arr[1] = 0;
	arr[0] = 0;
	for (int i = 2; i <= n; i++) {
		d(i);
	}
	cout << arr[n];

}