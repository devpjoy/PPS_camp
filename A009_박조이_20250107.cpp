/* 
작성자 : 박조이 (22200313) 
문제 번호 : A009
문제 제목 : 문자열 다루기 기본 (by programmers)
문제 설명 : 문자열 s의 길이가 4 혹은 6이고, 숫자로만 구성돼있는지 확인해주는 함수 작성
문제 난이도 : Very Easy
소요 시간 : 00시간 12분 
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if ((s.length() == 4) || (s.length() == 6)) {
        for (int i = 0; i < s.length(); i ++) {
            if (s[i] < '0' || s[i] > '9') {
                answer = false;
                break;
            }
        }
    }
    return answer;
}

int main () {
    string s1 = "a234"; // False
    string s2 = "1234"; // True

    if (solution(s1)) cout << "True" << endl;
    else cout << "False" << endl;
}

