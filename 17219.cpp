//비밀번호 찾기

#include <iostream>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	map <string, string> s;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		s.insert(pair<string, string>(a, b));
	}
	for (int i = 0; i < k; i++) {
		string tmp;
		cin >> tmp;
		cout << s[tmp] << "\n";
	}
	return 0;
}