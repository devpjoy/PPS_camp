/* 
작성자 : 박조이 (22200313) 
문제 번호 : A028 
문제 제목 : 큰 수 A + B (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 05분 
*/

#include <iostream>

using namespace std;

int main () {
    unsigned long long int a;
    unsigned long int b;
    cin >> a;
    cin >> b;
    cout << a << endl;
    cout << b << endl;
    
    unsigned long long int sum = 0;
    sum = a + b;
    cout << sum << endl;
    return 0;
}