//DFS¿Í BFS

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;
vector<int>* vec;

int* visit_dfs;
int* visit_bfs;
vector<int> dfs_ans;
vector<int> bfs_ans;

void dfs(int n) {
	dfs_ans.push_back(n);
	visit_dfs[n] = 1;
	for (int i = 0; i < vec[n].size(); i++) {
		if (visit_dfs[vec[n][i]] == 0) {
			dfs(vec[n][i]);
		}
	}
}
void bfs(int n) {
	queue<int> q;
	q.push(n);
	visit_bfs[n] = 1;
	int s;
	while (!q.empty()) {
		s = q.front();
		q.pop();
		bfs_ans.push_back(s);
		for (int i = 0; i < vec[s].size(); i++) {
			if (visit_bfs[vec[s][i]] == 0) {
				visit_bfs[vec[s][i]] = 1;
				q.push(vec[s][i]);
			}
		}
	}

}



int main() {
	int n, k;
	int V;
	cin >> n >> k >> V;
	vec = new vector<int>[n + 1];
	visit_bfs = new int[n + 1];
	visit_dfs = new int[n + 1];
	for (int i = 0; i <= n; i++) {
		visit_dfs[i] = 0;
		visit_bfs[i] = 0;
	}
	for (int i = 0; i < k; i++) {
		int x, y;
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for (int i = 0; i <= n; i++) {
		sort(vec[i].begin(), vec[i].end());
	}
	dfs(V);
	for (int i = 0; i < dfs_ans.size(); i++)
		cout << dfs_ans[i] << " ";
	cout << "\n";
	bfs(V);
	for (int i = 0; i < bfs_ans.size(); i++)
		cout << bfs_ans[i] << " ";



}