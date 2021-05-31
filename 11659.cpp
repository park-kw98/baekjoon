//구간 합 구하기 4

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, test;
	cin >> n >> test;
	vector <int> num;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
	}
	vector<pair<int, int>> case_t;
	for (int i = 0; i < test; i++) {
		int tmp_x;
		int tmp_y;
		cin >> tmp_x >> tmp_y;
		case_t.push_back(make_pair(tmp_x, tmp_y));
	}
	vector<int> prefix;
	prefix.push_back(0);
	for (int i = 0; i < n; i++)
		prefix.push_back(prefix[i] + num[i]);
	for (int i = 0; i < test; i++)
		cout << prefix[case_t[i].second]-prefix[case_t[i].first-1] << " ";
	return 0;
}