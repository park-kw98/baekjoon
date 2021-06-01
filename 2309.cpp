//ÀÏ°ö ³­ÀïÀÌ

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int sum = 0;
	vector<int> h;
	for (int i = 0; i < 9; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		h.push_back(tmp);
	}
	for (int i = 0; i < 9; i++)		sort(h.begin(), h.end());
	sum = sum - 100;
	int l_o;
	int l_t;
	for (int i = 0; i < 9; i++) {
		for (int j = i+1; j < 9; j++) {
			if (h[i] + h[j] == sum) {
				l_o = i;
				l_t = j;
				break;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (i == l_o || i == l_t) {
			continue;
		}
		else {
			cout << h[i] << "\n";
		}
	}
	return 0;
}