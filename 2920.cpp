#include <iostream>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int main() {
	int mus[8];
	int mus_s[8];
	int mus_rs[8];
	for (int i = 0; i < 8; i++)
		cin >> mus[i];
	copy(mus, mus + 8, mus_s);
	copy(mus, mus + 8, mus_rs);
	sort(mus_s, mus_s + 8);
	sort(mus_rs, mus_rs + 8, desc);
	
	if (equal(mus, mus+8, mus_s)){
		cout << "ascending";
	}
	else if (equal(mus, mus+8, mus_rs)) {
		cout << "descending";
	}
	else
		cout << "mixed";
	
	return 0;
}