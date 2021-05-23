//∫Ì∑¢¿Ë

#include <iostream>
using namespace std;

int main() {

	int N, M;
	cin >> N >> M;
	int* card = new int[N];
	for (int i = 0; i < N; i++)
		cin >> card[i];
	int max = 0;
	int ans[3];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < N; k++) {
				if (max < card[i] + card[j] + card[k] && card[i] + card[j] + card[k] <= M && i != j && i!= k && j!= k) {
					max = card[i] + card[j] + card[k];
				}
			}
		}
	}
	cout << max;
	return 0;
}