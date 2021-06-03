//°ËÁõ¼ö

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int* num;
	num = new int[5];
	for (int i = 0; i < 5; i++)
		cin >> num[i];
	int s = 0;
	for (int i = 0; i < 5; i++)
		s = s + pow(num[i], 2);
	cout << s % 10;


	return 0;
}