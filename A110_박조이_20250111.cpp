/* 
작성자 : 박조이 (22200313) 
문제 번호 : A110
문제 제목 : 거스름돈 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 18분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int cost;
    cin >> cost;
    
    if (cost > 1000) {
        cout << "cost must be smaller than 1000" << endl;
        return 0;
    }

    int rest = 1000 - cost;
    int coin_num = 0;

    if (rest > 500) {
        coin_num ++;
        rest -= 500;
        cout << rest << " " << coin_num << endl;
    }

    if (rest > 100) {
        coin_num += rest / 100;   
        rest %= 100;    
        cout << rest << " " << coin_num << endl;
    }    

    if (rest > 50) {
        coin_num ++;
        rest -= 50;
        cout << rest << " " << coin_num << endl;
    }

    if (rest > 10) {
        coin_num += rest / 10;
        rest %= 10;
        cout << rest << " " << coin_num << endl;
    }

    if (rest > 5) {
        coin_num ++;
        rest -= 5;
        cout << rest << " " << coin_num << endl;
    }

    if (rest > 1) {
        coin_num += rest;
        cout << rest << " " << coin_num << endl;
    }

    cout << coin_num << endl;
    return 0;
}