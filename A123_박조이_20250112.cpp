/* 
작성자 : 박조이 (22200313) 
문제 번호 : A123
문제 제목 : 1로 만들기 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 25분 
*/

#include <iostream>

using namespace std;

int main () {
    int x;
    cin >> x;

    int count = 0;

    while (x != 1) {
        if (x % 3 == 0) {
            x /= 3;
            count ++;
        }

        else if (x % 3 == 1) {
            x --;
            count ++;
            x /= 3;
            count ++;
        }

        else if (x % 2 == 0) {
            x /= 2;
            count ++;
        }
    }

    cout << count << endl;

    return 0;
}