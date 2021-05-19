//Ω∫≈√

#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	stack<int> st;
	for (int i = 0; i < n; i++) {
		cin >> s;
		
		if (s == "push") {
			int c;
			cin >> c;
			st.push(c);
		}
		else if (s == "top") {
			if (st.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << st.top() << endl;
			}
		}
		else if (s == "size") {
			cout << st.size() << endl;
		}
		else if (s == "empty") {
			if (st.empty()) {
				cout << "1" << endl;
			}
			else
				cout << "0" << endl;
		}
		else if (s == "pop") {
			if (st.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
	}

	return 0;
}