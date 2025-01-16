/* 
작성자 : 박조이 (22200313)  
문제 번호 : A127
문제 제목 : 최소공배수 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 40분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int t;
    cin >> t;

    int arr[t][2];
    int a, b;

    for (int i = 0; i < t; i ++) {
        cin >> a >> b;
        arr[i][0] = a;
        arr[i][1] = b;
    }

    cout << endl;

    vector<vector<int>> prime(t);

    for (int i = 0; i < t; i ++) {
        int a1 = arr[i][0];
        int b1 = arr[i][1];

        for (int j = 2; j <= a1; j ++) { 
            while (a1 % j == 0 && b1 % j == 0) {
                a1 /= j;
                b1 /= j;
                prime[i].push_back(j);
            }
        }
        if (a1 != arr[i][0] || b1 != arr[i][1]) {
            prime[i].push_back(a1);
            prime[i].push_back(b1);
        }
    }

    int result[t];

    for (int i = 0; i < t; i ++) {
        result[i] = 1;
    }

    for (int i = 0; i < t; i ++) {
        if (prime[i].empty()) {
            result[i] = arr[i][0] * arr[i][1];
        }
    }

    for (int i = 0; i < t; i ++) {
        for (int j = 0; j < prime[i].size(); j ++) {
            result[i] *= prime[i][j];
        }
    }

    for (int i = 0; i < t; i ++) {
        cout << result[i] << endl;
    }

    return 0;
}
