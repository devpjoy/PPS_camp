/* 
작성자 : 박조이 (22200313) 
문제 번호 : A124
문제 제목 : 소인수분해 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 00분 
*/

#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;

    while (n != 1) {
        for (int i = 2; i <= n; i ++) {
            while (n % i == 0) { //i로 나누어 떨어지는 동안에 
                n /= i;
                cout << i << endl;
            }
        }
    }

    return 0;
}