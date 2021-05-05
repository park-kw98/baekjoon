#include <iostream>
using namespace std;

int main() {
    int A_nums[10];
    int B_nums[10];
    int score[10][2];
    for (int i = 0; i < 10; i++) {
        cin >> A_nums[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> B_nums[i];
    }
    for (int i = 0; i < 10; i++) {
        if (A_nums[i] > B_nums[i]) {
            score[i][0] = 3;
            score[i][1] = 0;
        }
        else if (A_nums[i] < B_nums[i]) {
            score[i][0] = 0;
            score[i][1] = 3;
        }
        else {
            score[i][0] = 1;
            score[i][1] = 1;
        }
    }
    int score_A = 0;
    int score_B = 0;
    int n = 0;
    for (int i = 0; i < 10; i++) {
        score_A += score[i][0];
        score_B += score[i][1];
    }
    cout << score_A << " " << score_B << "\n";
    if (score_A > score_B)
        cout << "A";
    else if (score_A < score_B)
        cout << "B";
    else {
        for (int i = 0; i < 10; i++) {
            if (score[9 - i][0] == 3) {
                cout << "A";
                break;
            }

            else if (score[9 - i][0] == 0) {
                cout << "B";
                break;
            }
            else if (score[9 - i][0] == 1) {
                if (i < 9)
                    continue;
                else if (i == 9) {
                    cout << "D";
                }
            }
        }
    }
    cout << "\n";
    return 0;
}