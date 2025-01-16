/* 
작성자 : 박조이 (22200313) 
문제 번호 : A145
문제 제목 : 부족한 금액 계산하기 (by programmers)
문제 난이도 : Very Easy
소요 시간 : 00시간 07분 
*/

#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;  
    long long sum = 0;

    for (int i = 1; i <= count; i ++) {
        sum += price * i; 
    }

    answer = sum - money;
    if (answer <= 0) return 0;
    return answer;
}

int main () {
    int price = 3;
    int money = 20;
    int count = 4;
    cout << solution(price, money, count) << endl;
    return 0;
}