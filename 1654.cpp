//랜선 자르기

#include <iostream>
#include <algorithm>
using namespace std;

int bi(long long* arr, int size, int key, long long max_line) {
	long long low = 1;
	long long high = max_line;
	while (low <= high) {
		long long mid = (low + high) / 2;
		int check = 0;
		for (int i = 0; i < size; i++)
			check += arr[i] / mid;
		if (check < key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return high;

}

int main() {
	int k, n;
	cin >> k >> n;
	long long* line = new long long[k];
	long long max_line;
	for (int i = 0; i < k; i++) {
		cin >> line[i];
		max_line = max(max_line, line[i]);
	}
	cout << bi(line, k, n, max_line) << "\n";
	return 0;
}