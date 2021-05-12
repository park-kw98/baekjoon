//단어정렬

//알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

//길이가 짧은 것부터
//길이가 같으면 사전 순으로

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {
	int n;
	cin >> n;
	string *s = new string[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	sort(s, s + n , compare);
	string tmp;
	for (int i = 0; i < n; i++) {
		if (s[i] != tmp) {
			tmp = s[i];
			cout << s[i] << "\n";
		}
		else
			continue;
	}
	return 0;
}