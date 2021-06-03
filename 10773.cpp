//Á¦·Î

#include <stack>
#include <iostream>

using namespace std;

int main() {
	stack <int> s;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a != 0) {
			s.push(a);
		}
		else {
			s.pop();
		}
	}
	int ans = 0;
	int size = s.size();
	for (int i = 0; i < size; i++) {
		ans = s.top() + ans;
		s.pop();

	}
	cout << ans;
	
	return 0;
}


