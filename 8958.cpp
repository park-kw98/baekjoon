#include <iostream>
#include <string>
using namespace std;

int main() {

	int num;
	cin >> num;
	string* test = new string[num];
	for (int i = 0; i < num; i++)
		cin >> test[i];
	//ooxxoxox;
	for (int i = 0; i < num; i++) {
		int score = 0;
		int acc = 1;
		for (int j = 0; j < test[i].length(); j++) {
			if (test[i][j] == 'O') {
				score = score + acc;
				acc++;
			}
			else 
				acc = 1;
		}
		cout << score << '\n';
	}

	return 0;
}