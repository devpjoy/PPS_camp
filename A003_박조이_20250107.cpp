/* 
작성자 : 박조이 (22200313) 
문제 번호 : A003
문제 제목 : Plus One (by leetcode)
문제 설명 : 주어진 정수 배열을 하나의 정수 값이라고 생각했을 때, 그 정수에 1을 더한 값을 다시 배열의 형태로 return하는 함수를 작성한다.
문제 난이도 : Easy
소요 시간 : 00시간 50분
*/

#include <iostream> 
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> v;
        int sum = 0;

        //digit 의 값들을 하나의 정수로 바꾼 뒤, 1 더한 값을 sum 에 저장
        for (int i = 0; i < digits.size(); i ++) { 
            sum += digits[i] * pow(10, digits.size() - i - 1);
        }
        sum ++;

        //sum의 자릿수 구하기
        int digit_num = 0;

        for (int i = 0; i < 100; i ++) { 
            if (sum / (int)pow(10, i) != 0) digit_num ++;
        }

        //sum의 자릿수를 이용하여, 1 더한 값을 vector에 새로 저장
        while (digit_num > 0) { 
            v.push_back(sum / (int)pow(10, digit_num - 1));
            sum %= (int)pow(10, digit_num - 1);
            digit_num --;
        }

        return v;
    }
};

int main() {
    Solution solution;
    vector<int> digits = {1,2,3,4};
    digits = solution.plusOne(digits);

    cout << "[";
    for (int i = 0; i < digits.size(); i ++) {
        cout << digits[i];
        if (i != digits.size() - 1) cout << ",";
    }
    cout << "]" << endl;
    return 0; 
}
