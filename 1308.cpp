#include <iostream>
using namespace std;

int mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int check_y(int year) {
	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) 
				return 0;
			else
				return 1;
		}
		else
			return 0;
	}
	else
		return 1;
}

int days(int* date1, int* date2) {

	if (date1[0] == date2[0]) {
		if (date1[1] == date2[1]) {
			int d_s = date2[2] - date1[2];


			return d_s;
		}

		int d=0;
		for (int i = date1[1]; i < date2[1]-1; i++) {
			d = d + mon[i];
		}
		d = d + mon[date1[1] - 1] - date1[2];
		d = d + date2[2];
		if (check_y(date1[0]) == 0) {
			if (date1[1] <= 2 && date2[1] > 2)
				d++;
		}
		
		return d;
	}


	int d_day = 0;

	for (int i = date1[0] + 1; i < date2[0]; i++) {
		if (check_y(i) == 1)
			d_day = d_day + 365;
		else
			d_day = d_day + 366;
	}
	int date1_d=0;
	int date2_d=0;

	for (int i = date1[1]; i < 12; i++) {
		date1_d = date1_d + mon[i];
	}
	date1_d = date1_d + mon[date1[1] - 1] - date1[2];
	if (check_y(date1[0]) == 0)
		if (date1[1] <= 2)
			date1_d++;
	for (int i = 0; i < date2[1]-1; i++) {
		date2_d = date2_d + mon[i];
	}
	date2_d = date2_d + date2[2];
	if (check_y(date2[0]) == 0)
		if (date2[1] > 2)
			date2_d++;


	return date1_d + date2_d + d_day;
}


int main() {
	int date1[3];
	int date2[3];
	for (int i = 0; i < 3; i++) {
		cin >> date1[i];
	}
	for (int i = 0; i < 3; i++) {
		cin >> date2[i];
	}
	if (date2[0] >= date1[0] + 1000 && date2[1] >= date1[1] && date2[2] >= date1[2])
		cout << "gg";

	else {
		cout << "D-" << days(date1, date2);
		return 0;
	}
	return 0;
}
