/* 
작성자 : 박조이 (22200313)
문제 번호 : A006
문제 제목 : 문자열 내 p와 y의 개수 (by programmers)
문제 설명 : 대문자와 소문자가 섞여있는 문자열 s가 주어집니다. s에 'p'의 개수와 'y'의 개수를 비교해 
        같으면 True, 다르면 False를 return
문제 난이도 : Very Easy
소요 시간 : 00시간 10분 
*/

#include <string>
#include <iostream>

using namespace std;

bool solution(string s)
{
    bool answer = true;

    int p_num = 0;
    int y_num = 0;

    for (int i = 0; i < s.length(); i ++) {
        s[i] = tolower(s[i]);
        if(s[i] == 'p') p_num ++;
        if(s[i] == 'y') y_num ++;
    }

    if (p_num == y_num) return answer;
    else answer = false;

    return answer;
}

int main() {
    string s = "haPpyy";

    if(s.length() > 50) {
        cout << "s must not be larger than 50" << endl;
    }

    if(solution(s)) cout << "True" << endl;
    else cout << "False" << endl;
    
    return 0; 
}
