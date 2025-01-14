/* 
작성자 : 박조이 (22200313)  
문제 번호 : A017
문제 제목 : 방번호 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 38분 
*/

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cin >> input;
    cout << endl;

    int count = 1;

    vector<char> num;

    for (int i = 0; i < input.length(); i ++) {
        num.push_back(input[i]);
    } 

    sort(num.begin(), num.end());

    for (int i = 0; i < num.size(); i ++) {
        if (num[i] == num[i + 1]) {
            count ++;
        }
    }

    for (int i = 0; i < num.size(); i += 2) {
        if (num[i] == '6' && num[i + 1] == '6')  {
            count --;
        }
        if (num[i] == '9' && num[i + 1] == '9')  {
            count --;
        }
    }

    cout << count << endl;
    return 0;
}
