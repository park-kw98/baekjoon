//바이러스

#include <iostream>
#include <vector>

using namespace std;

int cnt = 0;
vector<int>* v;
int* visit;


void dfs(int i) {
	visit[i] = 1;
	for (int j = 0; j < v[i].size(); j++) {
		if (visit[v[i][j]] == 0) {
			cnt++;
			dfs(v[i][j]);			
		}
	}
}


int main() {

	int n;
	cin >> n;
	int k;
	cin >> k;
	visit = new int[n + 1];
	for (int i = 0; i <= n; i++)
		visit[i] = 0;
	v = new vector<int>[n + 1];
	for (int i = 0; i < k; i++) {
		int x;
		int y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
	cout << cnt;
	return 0;
}