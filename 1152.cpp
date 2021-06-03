//단어의 개수

#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int t = 0;
	if (s.empty()) {
		cout << "0";
		return 0;
	}
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ')
			t++;
	}
	if (s[0] == ' ')
		t--;
	if (s[s.length() - 1] == ' ')
		t--;
	cout << t+1;
	return 0;
}