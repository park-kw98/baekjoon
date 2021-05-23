//좌표 정렬하기

#include <iostream>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int>b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int main() {
	int n;
	cin >> n;
	pair<int, int>* pa = new pair<int, int>[n];
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		pa[i] = make_pair(a, b);
	}
	sort(pa, pa + n, compare);
	for (int i = 0; i < n; i++) {
		cout << pa[i].first << " " << pa[i].second << "\n";
	}


	return 0;
}