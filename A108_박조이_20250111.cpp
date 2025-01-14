/* 
작성자 : 박조이 (22200313) 
문제 번호 : A108
문제 제목 : 수 뒤집기 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 26분 
*/

#include <iostream>
#include <string>

using namespace std;

int main () {
    int t; //test case 개수
    cin >> t;

    string s[t];

    for (int i = 0; i < t; i ++) {
        cin >> s[i];
    }

    int num1;
    int num2;
    
    int sum1[t];
    for (int i = 0; i < t; i ++) {
        num1 = stoi(s[i]);
        for (int j = 0; j <s[i].length() / 2; j++) {
            char temp = s[i][j];
            s[i][j] = s[i][s[i].length() - 1 - j];
            s[i][s[i].length() - 1 - j] = temp;
            num2 = stoi(s[i]);
        }
        sum1[i] = num1 + num2;
    }

    string sum2[t];
    string result[t];

    cout << endl;

    for (int i = 0; i < t; i ++) {
        result[i] = "YES";
    }

    for (int i = 0; i < t; i ++) {
        sum2[i] = to_string(sum1[i]);
        for (int j = 0; j < sum2[i].length(); j ++) {
            if (sum2[i][j] != sum2[i][sum2[i].length() - 1 - j]) {
                result[i] = "NO"; 
            }
        }
    }

    for (int i = 0; i < t; i ++) {
        cout << result[i] << endl;
    }
    
    return 0;
}