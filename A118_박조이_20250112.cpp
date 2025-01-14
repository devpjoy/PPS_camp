/* 
작성자 : 박조이 (22200313) 
문제 번호 : A118
문제 제목 : Move Zeroes (by leetcode)
문제 난이도 : Very Easy
소요 시간 : 00시간 00분 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i] == 0) {
                zeros ++;
                nums.erase(nums.begin() + i);
            }
        }

        for (int i = 0; i < zeros; i ++) {
            nums.push_back(0);
        }

        for (int i = 0; i < nums.size(); i ++) {
            cout << nums[i] << " ";
        }
        
        cout << endl;
    }
};

int main () {
    vector<int> nums = {0,1,0,3,12};

    Solution solution;
    solution.moveZeroes(nums);
}