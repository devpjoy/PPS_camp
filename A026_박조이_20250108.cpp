/* 
작성자 : 박조이 (22200313) 
문제 번호 : A026 
문제 제목 : 하샤드 수 (by programmers)
문제 난이도 : Very Easy
소요 시간 : 00시간 20분 
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string x1 = to_string(x);

    int num = x1.length();
    int origin_x = x;
    int sum = 0;

    for (int i = x1.length() - 1; i >= 0; i --) {
        sum += x / pow(10, i);
        x = x % (int)(pow(10, i));
    }

    if (origin_x % sum != 0) {
        answer = !answer;
    }

    return answer;
}

int main () {
    int x = 11;
    if (solution(x)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}