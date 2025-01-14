/* 
작성자 : 박조이 (22200313) 
문제 번호 : A122
문제 제목 : Rotate String (by leetcode)
문제 난이도 : Very Easy
소요 시간 : 00시간 11분 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        bool result = false;

        vector<char> s1;
        vector<char> g1;

        for (int i = 0; i < s.length(); i ++) {
            s1.push_back(s[i]);
        }

        for (int i = 0; i < goal.length(); i ++) {
            g1.push_back(goal[i]);
        }

        for (int i = 0; i < s1.size(); i ++) {
            s1.push_back(s1[0]);
            s1.erase(s1.begin());

            if (s1 == g1) {
                return !result;
            }
        }
    
        return result;    
    }
};

int main () {
    string s1 = "abcde";
    string g1 = "cdeab";

    string s2 = "abcde";
    string g2 = "abced";

    Solution solution;
    
    if (solution.rotateString(s1, g1)) cout << "true" << endl;
    else cout << "false" << endl;

    if (solution.rotateString(s2, g2)) cout << "true" << endl;
    else cout << "false" << endl;
}