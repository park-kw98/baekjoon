//팩토리얼 0의 개수

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	int tmp = n;
	int cnt = 0;
	while (tmp / 5) {
		cnt++;
		tmp /= 5;
	}
	vector<int> count;
	for (int i = 0; i < cnt; i++) {
		int t = n / 5;
		count.push_back(t);
		n /= 5;
	}
	int result = 0;
	for (int i = 0; i < cnt; i++)
		result += count[i];
	cout << result;
	return 0;
}
