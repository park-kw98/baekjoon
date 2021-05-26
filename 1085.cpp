//직사각형에서 탈출

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int min_1;
	int min_2;
	min_1 = min(x, w - x);
	min_2 = min(y, h - y);
	int ans = min(min_1, min_2);
	cout << ans;
	return 0;
}