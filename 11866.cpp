//¿ä¼¼Çª½º 0

#include <iostream>
using namespace std;

int n, k;
bool* people;
int* ans;
int start(int tmp) {
	int check = 0;
	for (int i = 0; i <= n; i++) {
		if (people[(tmp + i) % n] == true) {
			check = (tmp + i) % n;
			break;
		}
	}

	return check;
}
int yo(int tmp){
	int check = start(tmp);
	int gap = 0;
	int one_num = 1;
	while (true) {
		if (people[(check+1 + gap) % n] == true) {
			one_num++;
		}
		gap++;
		if (one_num == k)
			break;
	}
	people[(check + gap) % n] = false;

	return (check + gap) % n;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> k;
	if (k == 1) {
		cout << "<";
		for (int i = 0; i < n - 1;i++) {
			cout << i + 1 << ", ";
		}
		cout << n << ">";
		return 0;
	}
	people = new bool[n];
	for (int i = 0; i < n; i++)
		people[i] = true;
	ans = new int[n];
	ans[0] = yo(0);
	for (int i = 1; i < n; i++) {
		ans[i] = yo(ans[i - 1]);
	}
	cout << "<";
	for (int i = 0; i < n-1; i++) cout << ans[i]+1 << ", ";
	cout << ans[n - 1]+1;
	cout << ">";
	return 0;
}