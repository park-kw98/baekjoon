//µ¿Àü 0

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> coin;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		coin.push_back(tmp);
	}
	int cnt = 0;
	for (int i = n-1; i >=0; i--) {
		while (k - coin[i] >= 0) {
			cnt++;
			k -= coin[i];
		}
	}
	cout << cnt;

	return 0;
}