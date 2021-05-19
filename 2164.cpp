//카드2

//규칙에 따라 카드 버리기

//맨위 버리고 2번째 아래로 해당 과정 무한반복시 마지막 카드 구하기


#include <iostream>
#include <vector>
using namespace std;


int main() {
	int c;
	cin >> c;
	vector<int> v(c);
	for (int i = 0; i < c; i++) {
		v[i] = i + 1;
	}
	int vs = v.size();
	int start = 0;
	int ans = v.size()-1;
	while (vs>1) {
		start++;
		v.push_back(v[start]);
		vs--;
		start++;
		ans++;
	}
	cout << v[ans];


	return 0;
}