//ī��2

//��Ģ�� ���� ī�� ������

//���� ������ 2��° �Ʒ��� �ش� ���� ���ѹݺ��� ������ ī�� ���ϱ�


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