//1, 2, 3 ¥ı«œ±‚ 7

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;


long long arr[1001][1001] = { 0, };

void multi(int max_n, int max_m) {
	for (int i = 1; i <= max_m; i++) {
		for (int j = 4; j <= max_n; j++) {
			arr[j][i] = (arr[j - 1][i - 1] + arr[j - 2][i - 1] + arr[j - 3][i - 1]) % 1000000009;
		}
	}
}

int main() {
	int test;
	cin >> test;
	vector<pair<int, int>> p;
	int max_n = 0;
	int max_m = 0;
	for (int i = 0; i < test; i++) {
		int n, m;
		cin >> n >> m;
		max_n = max(max_n, n);
		max_m = max(max_m, m);
		p.push_back(make_pair(n, m));
	}
	arr[1][1] = 1;
	arr[2][1] = 1;
	arr[2][2] = 1;
	arr[3][1] = 1;
	arr[3][2] = 2;
	arr[3][3] = 1;
	multi(max_n, max_m);
	for (int i = 0; i < p.size(); i++)
		cout << arr[p[i].first][p[i].second] << "\n";
	return 0;
}