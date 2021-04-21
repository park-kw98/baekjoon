#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}

	char alp[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X','Y', 'Z' };

	int ans[26];
	for (int i = 0; i < 26; i++) {
		ans[i] = 0;
	}
	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (s[i] == alp[j]) {
				ans[j]++;
			}
		}
	}
	int max = *max_element(ans, ans+26);
	int test = 0;
	int whe;
	for (int i = 0; i < 26; i++) {
		if (ans[i] == max) {
			test++;
			whe = i;
		}
	}
	if (test > 1) {
		cout << "?\n";
		return 0;
	}
	cout << alp[whe]<<"\n";
	return 0;

}