/* 
작성자 : 박조이 (22200313) 
문제 번호 : A019
문제 제목 : 숫자의 개수 (by 백준)
문제 설명 : 세 개의 자연수 A, B, C가 주어질 떄, A * B * C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 문제
문제 난이도 : Very Easy
소요 시간 : 00시간 15분 
*/

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int A, B, C;

    cin >> A; 
    cin >> B;
    cin >> C;
    cout << endl;

    if ((A < 100 || A > 1000) || (B < 100 || B > 1000) || (C < 100 || C > 1000)) {
        cout << "The number must be larger than 99 and less than 1000" << endl;
        return 0;
    }
    
    long int sum = A * B * C;
    
    string s = to_string(sum);

    vector<int> num = {0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < s.length(); i ++) {
        if (s[i] == '0') num[0] ++;
        if (s[i] == '1') num[1] ++;
        if (s[i] == '2') num[2] ++;
        if (s[i] == '3') num[3] ++;
        if (s[i] == '4') num[4] ++;
        if (s[i] == '5') num[5] ++;
        if (s[i] == '6') num[6] ++;
        if (s[i] == '7') num[7] ++;
        if (s[i] == '8') num[8] ++;
        if (s[i] == '9') num[9] ++;
    }

    for (int i = 0; i < num.size(); i ++) {
        cout << num[i] << endl;
    }

    return 0;
}
