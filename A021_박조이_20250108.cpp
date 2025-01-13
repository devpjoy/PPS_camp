/* 
작성자 : 박조이 (22200313) 
문제 번호 : A021
문제 제목 : 플러그 (by 백준)
문제 설명 : 하나의 플러그가 있고, N개의 멀티탭이 있다. 각 멀티탭은 몇 개의 플러그로 이루어져 있다고 한다. 
        최대 몇 대의 컴퓨터를 전원에 연결할 수 있는지 출력하는 문제
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

