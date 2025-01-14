/* 
작성자 : 박조이 (22200313) 
문제 번호 : A031 
문제 제목 : 초콜릿 자르기 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 06분 
*/

#include <iostream>

using namespace std;

int main () {
    int n;
    int m;
    cin >> n >> m;

    int sum = 0;
    sum = n * (m - 1) + (n - 1);

    cout << sum << endl;
    return 0;
}