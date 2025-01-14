/* 
작성자 : 박조이 (22200313) 
문제 번호 : A115
문제 제목 : Maximum Number of Balloons (by leetcode)
문제 난이도 : Very Easy
소요 시간 : 00시간 00분 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int result = 0;
        int score = 0;
        for (int i = 0; i < text.length(); i ++) {
            if (text[i] == 'b' || text[i] == 'a' || text[i] == 'l' || text[i] == 'o' || text[i] == 'n') {
                score ++;
            }
        }
        
        result = score / 7;
        return result; 
    }
};

int main () {
    string text1 = "nlaebolko";
    string text2 = "loonbalxballpoon";
    string text3 = "leetcode";

    Solution solution;
    cout << "Output :" << solution.maxNumberOfBalloons(text1) << endl; // 1
    cout << "Output :" << solution.maxNumberOfBalloons(text2) << endl; // 2
    cout << "Output :" << solution.maxNumberOfBalloons(text3) << endl; // 0
}