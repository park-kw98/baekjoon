//atm

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {

	int people;
	cin >> people;
	vector<int> p;
	for (int i = 0; i < people; i++) {
		int tmp;
		cin >> tmp;
		p.push_back(tmp);
	}
	vector<int> min;
	sort(p.begin(), p.end(), compare);
	for (int i = 0; i < people; i++) {
		int tmp = 0;
		for (int j = 0; j < i + 1; j++) {
			tmp = tmp + p[j];
		}
		min.push_back(tmp);
	}
	int ans = 0;
	for (int i = 0; i < people; i++)
		ans = ans + min[i];
	cout << ans;
	return 0;
}