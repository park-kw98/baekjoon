//1, 2, 3 ¥ı«œ±‚

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


//int* arr;
//arr[n] -> arr[n-3] arr[n-2] arr[n-1]
int arr[100001];
bool compare(int a, int b) {
	return a > b;
}


void multi(int n) {
		arr[n] = arr[n - 3] + arr[n - 2] + arr[n - 1];
}

int main() {

	int n;
	cin >> n;
	int* test = new int[n];
	int max_t = 0;
	for (int i = 0; i < n; i++) {
		cin >> test[i];
		max_t = max(test[i], max_t);
	}
//	arr = new int[n];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= max_t; i++) {
		multi(i);
	}
	for (int i = 0; i < n; i++) {
		cout << arr[test[i]] << " ";
	}
	return 0;
}