//피보나치 함수

#include <iostream>
#include <vector>
using namespace std;

vector<int> dp;

void fibo(int n) {
	for (int i = 3; i <= n; i++) {
		dp.push_back(dp[i - 1] + dp[i - 2]);
	}
}
int main() {
	dp.push_back(0);
	dp.push_back(1);
	dp.push_back(1);
	int n;
	cin >> n;
	int max_ = 0;
	vector<int> k;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		max_ = max(max_, tmp);
		k.push_back(tmp);
	}
	fibo(max_);
	for (int i = 0; i < k.size(); i++) {
		if (k[i] > 0)
			cout << dp[k[i] - 1] << " " << dp[k[i]] << "\n";
		else
			cout << "1 0" << "\n";
	}
	return 0;
}