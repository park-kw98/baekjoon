//ЦђБе

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<double> score;
	double max_ = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		max_ = max(tmp, int(max_));
		score.push_back(tmp);
	}
	int mi = 0;
	for (int i = 0; i < n; i++)
		mi = mi + score[i];
	cout << mi / max_ * 100 / n;

	return 0;
}