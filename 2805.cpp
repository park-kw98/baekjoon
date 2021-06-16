//나무 자르기

#include <iostream>
#include <vector>

using namespace std;

int binary(vector<long long> length, long long len, long long key) {
	long long start = 0;
	long long end = len;
	long long mid = 0;
	while (end - start >= 0) {
		mid = (start + end) / 2;
		long long tmp = 0;
		for (int i = 0; i < length.size(); i++) {
			if (length[i] >= mid)
				tmp = tmp + length[i] - mid;
		}
		if (tmp == key)
			return mid;
		else if (tmp > key)
			start = mid + 1;
		else 
			end = mid - 1;
	}
	return end;

}

int main() {
	int n, m;
	cin >> n >> m;
	vector<long long> length;
	long long max_ = 0;
	for (int i = 0; i < n; i++) {
		long long tmp;
		cin >> tmp;
		max_ = max(tmp, max_);
		length.push_back(tmp);
	}
	long long ans = binary(length, max_, m);
	cout << ans;

	return 0;
}