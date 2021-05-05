	#include <iostream>
	#include <string>
	#include <cmath>
	using namespace std;

	int main() {
		string s;
		cin >> s;
		int len = (s.length() + 2) / 3 * 3;
		int bt = len - s.length();
		char* new_s = new char[len];
		for (int i = 0; i < bt; i++) {
			new_s[i] = '0';
		}
		for (int i = bt; i < len; i++) {
			new_s[i] = s[i-bt];
		}
		int group_s = len / 3;
		for (int i = 0; i < group_s; i++) {
			cout <<(new_s[i * 3] - '0') * 4 + (new_s[i * 3 + 1] - '0') * 2 + (new_s[i * 3 + 2] - '0');
		}

	}