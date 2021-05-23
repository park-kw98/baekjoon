//수 정렬하기3

#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int count[10001] = { 0, };
	int n;
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		count[tmp]++;
	}
	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++)
			cout << i << "\n";
	}
	return 0;
}