#include <iostream>

using namespace std;

int main() {

	string col[10] = {"black","brown","red","orange","yellow","green","blue","violet","grey","white" };
	int ans[3];
	for (int i = 0; i < 3; i++) {
		ans[i] = 0;
	}
	string s;
	for (int i = 0; i < 3; i++) {
		cin >> s;
		for (int j = 0; j < 10; j++) {
			if (col[j] == s) {
				ans[i] = j;
			}
		}	
	}
	long long answer = 10 * ans[0] + ans[1];
	for (int i = 0; i < ans[2]; i++) {
		answer = answer * 10;
	}
	cout << answer<<"\n";
	return 0;
}