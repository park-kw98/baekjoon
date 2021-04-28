#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1') {
			ans = ans + pow(2, s.length() - 1 - i);
		}
	}
	cout << oct << ans;
}