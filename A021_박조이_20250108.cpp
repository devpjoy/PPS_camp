/* 
작성자 : 박조이 (22200313) 
문제 번호 : A021
문제 제목 : 플러그 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 10분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> multi_con(n);

    for (int i = 0; i < n; i ++) {
        cin >> multi_con[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i ++) {
        sum += multi_con[i];
    }

    sum -= n - 1;

    cout << sum << endl;
    return 0;
}

