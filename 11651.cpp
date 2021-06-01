//좌표 정렬하기 2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> p, pair<int, int> q) {
	if (p.second == q.second)
		return p.first < q.first;
	return p.second < q.second;
}
int main() {
	vector<pair<int, int>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp_x;
		int tmp_y;
		cin >> tmp_x >> tmp_y;
		v.push_back(make_pair(tmp_x, tmp_y));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}


}