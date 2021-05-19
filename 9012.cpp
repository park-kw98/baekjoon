//°ýÈ£

//(()) -> yes ()() -> yes  )( -> no (() -> no

#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	string* ans = new string[n];
	for (int j = 0; j < n; j++) {
		string s;
		cin >> s;
		int left = 0;
		int right = 0;
		int len = s.length();
		for (int i = 0; i < len; i++) {
			if (s[i] == '(')
				left++;
			if (s[i] == ')')
				right++;
			if (left < right) {	
				break;
			}
		}
		if (left != right)
			ans[j] = "NO";
		else
			ans[j] = "YES";
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}