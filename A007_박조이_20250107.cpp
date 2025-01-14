/* 
작성자 : 박조이 (22200313) 
문제 번호 : A007
문제 제목 : 음계 판별하기 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 17분 
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8}; //ascending
    // vector<int> v = {8, 7, 6, 5, 4, 3, 2, 1}; //descending
    // vector<int> v = {3, 4, 2, 1, 5, 7, 8, 6}; //mixed

    int result;
    vector<string> output = {"ascending", "descending", "mixed"};

    for (int i = 0; i < 8; i ++) {
        if(v[0] == 1 && v[i] + v[7 - i] == 9) {
            result = 0;
        }

        else if(v[0] == 8 && v[i] + v[7 - i] == 9) {
            result = 1;
        }

        else {
            result = 2;
        }
    }

    cout << output[result] << endl;
    return 0; 
}
