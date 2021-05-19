//�� ã��

//N���� ���� A[1], A[2], ��, A[N]�� �־��� ���� ��, �� �ȿ� X��� ������ �����ϴ��� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.

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