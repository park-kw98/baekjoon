#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		cout << "Pairs for " << tmp << ": ";
		if(tmp>2)
			cout << "1" << " " << tmp - 1;
		for (int j = 2; j <= tmp / 2; j++) {	
			if (tmp - j == j)
				break;
			cout << ", " <<j << " " << tmp - j;
		}
		cout << "\n";
	}

	return 0;
}