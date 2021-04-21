#include <iostream>
#include <cmath>
using namespace std;

int main() {

	long double N;
	cin >> N;
	int f = 0;
	int tmp = N;
	while (tmp / 10 >= 1) {
		f++;
		tmp = tmp / 10;
	}
	if (f == 0)
		cout << N;
	else {
		int ans;
		for (int i = 1; i < f + 1; i++) {
			N = floor(N / pow(10, i) + 0.5) * pow(10, i);
			ans = N;
			//cout << ans<<"\n";
		}
		ans = N;
		cout << ans << "\n";

	}return 0;
}