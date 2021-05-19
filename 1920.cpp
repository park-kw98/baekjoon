//수 찾기

//N개의 정수 A[1], A[2], …, A[N]이 주어져 있을 때, 이 안에 X라는 정수가 존재하는지 알아내는 프로그램을 작성하시오.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;
	int* N = new int[n];
	for (int i = 0; i < n; i++)
		cin >> N[i];
	int m;
	cin >> m;
	int * M = new int[m];
	for (int i = 0; i < m; i++)
		cin >> M[i];
	int* ans = new int[m];

	sort(N, N + n);
	for (int i = 0; i < m; i++)
		ans[i] = 0;
	int first;
	int end;
	int mid;
	
	for (int i = 0; i < m; i++) {
		first = 0;
		end = n-1;
		while (end >= first) {
			mid = (first + end) / 2;
			if (N[mid] == M[i]) {
				ans[i] = 1;
				break;
			}
			else if(N[mid] > M[i]) {
				end = mid - 1;
			}
			else {
				first = mid + 1;
			}
		}
	}
	
	for (int i = 0; i < m; i++)
		cout << ans[i] << "\n";

	return 0;
}