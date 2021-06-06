//Four Squares 

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<int> v;
	vector<int> ans;
	ans.push_back(0);
	ans.push_back(1);	
	int n;
	cin >> n;
	int k = int(sqrt(n));
	for (int i = 0; i <= k; i++)
		v.push_back(i * i);
	for (int i = 2; i <= n; i++) {
		int min_ = ans[i - 1] + 1;
		for (int j = 1; j * j <= i; j++) {
			int tmp = ans[i - j * j];
			min_ = min(min_, tmp + 1);
		}
		ans.push_back(min_);
	}
	cout << ans[n];

	return 0;
}