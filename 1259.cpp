//�縰��Ҽ�

//� �ܾ �ڿ������� �о �Ȱ��ٸ� �� �ܾ �Ӹ�����̶�� �Ѵ�. 'radar', 'sees'�� �Ӹ�����̴�.
//���� �Ӹ�������� ����� �� �ִ�. ���� ���ڵ��� �ڿ������� �о ���ٸ� �� ���� �Ӹ���Ҽ���. 121, 12421 ���� �Ӹ���Ҽ���. 
//123, 1231�� �ڿ������� ������ �ٸ��Ƿ� �Ӹ���Ҽ��� �ƴϴ�.
//���� 10�� �Ӹ���Ҽ��� �ƴѵ�, �տ� ���ǹ��� 0�� �� �� �ִٸ� 010�� �Ǿ� �Ӹ���Ҽ��� ����� ���� ������, 
//Ư���� �̹� ���������� ���ǹ��� 0�� �տ� �� �� ���ٰ� ����.

#include <iostream>
#include <string>
using namespace std;

bool check(string s) {
	for (int i = 0; i < s.length() / 2; i++) {
		if (s[i] != s[s.length() - i - 1])
			return false;
		else
			continue;
	}
	return true;
}

int main() {
	string s;
	while (true) {
		cin >> s;
		if (s == "0") 
			break;
		else {
			if (check(s) == true) {
				cout << "yes\n";
			}
			else
				cout << "no\n";
		}
		
	}
	return 0;
}