//�ܾ�����

//���ĺ� �ҹ��ڷ� �̷���� N���� �ܾ ������ �Ʒ��� ���� ���ǿ� ���� �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

//���̰� ª�� �ͺ���
//���̰� ������ ���� ������

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.length() == b.length())
		return a < b;
	else
		return a.length() < b.length();
}

int main() {
	int n;
	cin >> n;
	string *s = new string[n];
	for (int i = 0; i < n; i++)
		cin >> s[i];
	sort(s, s + n , compare);
	string tmp;
	for (int i = 0; i < n; i++) {
		if (s[i] != tmp) {
			tmp = s[i];
			cout << s[i] << "\n";
		}
		else
			continue;
	}
	return 0;
}