//µ¢Ä¡

#include <iostream>
#include <vector>

using namespace std;


class People {
public:
	int weight;
	int height;
	People() {
		this->weight = 0;
		this->height = 0;
	}
};

int main() {
	vector<People> p;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		People tmp;
		int tmp_h;
		int tmp_w;
		cin >> tmp_w >> tmp_h;
		tmp.height = tmp_h;
		tmp.weight = tmp_w;
		p.push_back(tmp);
	}
	vector<int> r;
	for (int i = 0; i < n; i++) {
		int rank = 1;
		for (int j = 0; j < n; j++) {
			if (p[i].height < p[j].height && p[i].weight < p[j].weight)
				rank++;
		}
		r.push_back(rank);
	}
	for (int i = 0; i < n; i++)
		cout << r[i] << " ";

	return 0;
}