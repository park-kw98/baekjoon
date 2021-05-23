//이항계수

#include <iostream>
using namespace std;

int main() {

	int n, k;
	cin >> n >> k;

	int ans = 1;

	for (int i = 1; i < k+1; i++) {
		ans = ans * (n - i + 1) / i;
	}
	cout << ans;

	return 0;
}