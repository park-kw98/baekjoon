//µË∫∏¿‚

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<string> s;
	int n, k;
	cin >> n >> k;
	string tmp;
	for (int i = 0; i < n + k; i++) {
		cin >> tmp;
		s.push_back(tmp);
	}
	sort(s.begin(), s.end());
	vector<string> answer;
	for (int i = 0; i < n + k-1; i++) {
		if (s[i] == s[i + 1]) {
			tmp = s[i];
			answer.push_back(tmp);
		}
	}
	sort(answer.begin(), answer.end());
	cout << answer.size() << "\n";
	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << "\n";
	return 0;
}