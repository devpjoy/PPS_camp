/* 
작성자 : 박조이 (22200313) 
문제 번호 : A033 
문제 제목 : 나는 요리사다 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 07분 
*/

#include <iostream>

using namespace std;

int main () {
    int arr[5][4] = {0};

    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j < 4; j ++) {
            cin >> arr[i][j]; 
        }
    }

    cout << "\n";

    int sum[5] = {0};

    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j < 4; j ++) {
            sum[i] += arr[i][j];
        }
    }

    int max = sum[0];
    int max_idx = 0;

    for (int i = 0; i < 5; i ++) {
        if (sum[i] > max) {
            max = sum[i];
            max_idx = i;
        }
    }

    cout << max_idx + 1 << " " << max << endl;

    return 0;
}