//���� ī��2

//���� ī��� ���� �ϳ��� ������ �ִ� ī���̴�. ����̴� ���� ī�� N���� ������ �ִ�. 
//���� M���� �־����� ��, �� ���� �����ִ� ���� ī�带 ����̰� �� �� ������ �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

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