#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int a, b;
	int tmp;
	while (n--) {
		cin >> a >> b;
		tmp = 1;
		for (int i = 0; i < b; i++)
			tmp = (tmp * a) % 10;
		if (tmp == 0)
			tmp = 10;
		cout << tmp << "\n";
	}

	return 0;
}
