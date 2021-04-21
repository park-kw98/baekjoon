#include <iostream>
#include <string>
using namespace std;

int main() {

	int n;
	cin >> n;

	string s;
	cin >> s;

	string ans = s;

	int s_len = s.length();

	for (int i = 0; i < n-1; i++) {
		string tmp;
		cin >> tmp;
		for (int j = 0; j < s_len; j++) {
			if (tmp[j] != s[j]) {
				ans[j] = '?';
			}
		}
	}
	cout << ans;

	return 0;
}