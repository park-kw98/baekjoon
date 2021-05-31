//파도반 수열

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector < long long > s;

void d(int n) {
	s.push_back(s[n - 1] + s[n - 5]);
}

int main() {

	int n;
	cin >> n;
	s.push_back(1);
	s.push_back(1);
	s.push_back(1);
	s.push_back(2);
	s.push_back(2);
	s.push_back(3);
	int max_ = 0;
	vector<int> test;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		test.push_back(tmp);
		max_ = max(tmp, max_);
	}for (int i = 6; i < max_; i++)
		d(i);
	for (int i = 0; i < n; i++) {
		cout << s[test[i]-1] << " ";
	}
	return 0;
}