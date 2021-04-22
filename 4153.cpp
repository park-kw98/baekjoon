#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	while (1) {
		int side[3];
		cin >> side[0] >> side[1] >> side[2];

		sort(side, side + 3);

		if (side[2] == 0)
			return 0;

		if (pow(side[0], 2) + pow(side[1], 2) == pow(side[2], 2))
			cout << "right"<<"\n";
		else
			cout << "wrong"<<"\n";

	}
}