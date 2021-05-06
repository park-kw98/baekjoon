#include <iostream>
using namespace std;

int main() {
	
	int num;
	cin >> num;

	int* nums = new int[num];
	for (int i = 0; i < num; i++)
		cin >> nums[i];
	int min = nums[0];
	int max = nums[0];
	for (int i = 1; i < num; i++) {
		if (min > nums[i])
			min = nums[i];
		if (max < nums[i])
			max = nums[i];
	}
	cout << min << " " << max;


	return 0;
}