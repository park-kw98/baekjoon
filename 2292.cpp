//¹úÁı

#include <iostream>
#include <vector>

using namespace std;

int cig(int n) {
	int cnt = 0;
	for (int i = 0; i <= n; i++)
		cnt += 6 * i;
	return cnt;
}

int main() {
	
	int n;
	cin >> n;
	vector<int> v;
	v.push_back(1);
	for (int i = 1; i < n; i++) {
		if ((cig(i - 1) + 2) > n)
			break;
		v.push_back(cig(i - 1) + 2);
	}
	cout << v.size();

	return 0;
}