/* 
작성자 : 박조이 (22200313) 
문제 번호 : A020
문제 제목 : 지능형 기차 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 28분 
*/

#include <iostream>

using namespace std;

int main () {
    int max = 0;
    int input;
    int total = 0;

    int s[4][2];

    for (int i = 0; i < 2; i ++) {
        cin >> s[0][i];
    }

    for (int i = 0; i < 2; i ++) {
        cin >> s[1][i];
    }

    for (int i = 0; i < 2; i ++) {
        cin >> s[2][i];
    }

    for (int i = 0; i < 2; i ++) {
        cin >> s[3][i];
    }
    
    for (int i = 0; i < 4; i ++) {
        total += -s[i][0] + s[i][1];
        if (total > max) {
            max = total;
        }
    }

    cout << max << endl;

    return 0;
}