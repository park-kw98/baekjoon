//숫자 카드2

//숫자 카드는 정수 하나가 적혀져 있는 카드이다. 상근이는 숫자 카드 N개를 가지고 있다. 
//정수 M개가 주어졌을 때, 이 수가 적혀있는 숫자 카드를 상근이가 몇 개 가지고 있는지 구하는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>

using namespace std;

int upper(int* arr, int target, int n) {
	int mid;
	int start = 0;
	int end = n - 1;
	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] > target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}
int lower(int* arr, int target, int n) {
	int mid;
	int start = 0;
	int end = n - 1;
	while (end > start) {
		mid = (start + end) / 2;
		if (arr[mid] >= target)
			end = mid;
		else start = mid + 1;
	}
	return end;
}

int main() {

	int n;
	int m;
	cin >> n;
	int* N = new int[n];
	for (int i = 0; i < n; i++)
		cin >> N[i];
	cin >> m;
	int* M = new int[m];
	for (int i = 0; i < m; i++)
		cin >> M[i];
	sort(N, N + n);
	
	for (int i = 0; i < m; i++) {
		if (N[n - 1] == M[i]) {

			int up = upper(N, M[i], n);
			int low = lower(N, M[i], n);
			cout << up - low + 1<< " ";

		}
		else {

			int up = upper(N, M[i], n);
			int low = lower(N, M[i], n);
			cout << up - low << " ";

		}
	}

	


	return 0;
}