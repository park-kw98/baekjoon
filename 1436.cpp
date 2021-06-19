//¿µÈ­°¨µ¶ ¼ò

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int find_six(int n) {
	int check = 0;
	int tmp;
	while (n > 0) {
		tmp = n % 10;
		if (tmp == 6)
			check++;
		else
			check = 0;
		if (check == 3)
			break;
		n /= 10;
	}

	return check;
}

int main() {
	map<int, int> m;
	int n;
	cin >> n;
	int cnt = 0;
	int c = 0;
	while (cnt < n) {
		int k = c;
		int check = find_six(k);
		if (check >= 3)
			cnt++;
		c++;
	}
	cout << c - 1;

	return 0;
}