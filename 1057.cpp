#include <iostream>
#include<cmath>
using namespace std;

int main() {

	int loc_a;
	int loc_b;
	int n;
	cin >> n >> loc_a >> loc_b;
	int round = 1;
	
	for (int i = 0; i < n-1; i++) {
		if (abs(loc_b - loc_a) == 1 && (loc_a / 2 + loc_a % 2) == (loc_b / 2 + loc_b % 2)) break;
		loc_a = loc_a / 2 + loc_a % 2;
		loc_b = loc_b / 2 + loc_b % 2;
		round++;
	}
	cout << round;

}