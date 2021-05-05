#include <iostream>
using namespace std;

int main() {

	int num_s;
	string s;
	cin >> num_s >> s;
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum = sum + s[i] - '0';
		
	}
	cout << sum;


	return 0;
}