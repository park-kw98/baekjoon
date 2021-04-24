#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	string s;
	cin >> s;
	int len = s.length();
	int k = len / n;

	char** tmp = new char*[n];
	for (int i = 0; i < n; i++) {
		tmp[i] = new char[k];
	}
	char* s_tmp = new char[n];
	for (int i = 0; i < k; i++) {
		if (i % 2 == 1) {
			for (int j = 0; j < n; j++) {
				s_tmp[j] = s[n * i + j];
			}
			for (int w = 0; w < n; w++) {
				s[n * i + n - w-1] = s_tmp[w];
			}
		}
		else
			continue;
	}
	int c = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < n; j++) {
			tmp[j][i] = s[c++];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << tmp[i][j];
		}
	}
	
	return 0;
}