//나이순 정렬

#include <iostream>
#include <algorithm>
using namespace std;


class People {
public:
	int age;
	string name;
	People() {
		this->age = 0;
		this->name = "";
	}
};
bool compare(People a, People b) {
	return a.age < b.age;
}

int main() {
	int n;
	cin >> n;
	People * p = new People[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i].age;
		cin >> p[i].name;
	}
	stable_sort(p, p + n, compare);
	for (int i = 0; i < n; i++) {
		cout << p[i].age << " " << p[i].name << "\n";
	}

	return 0;
}