/* 
작성자 : 박조이 (22200313) 
문제 번호 : A013
문제 제목 : Single Number (by leetcode)
문제 설명 : 비어 있지 않은 정수 배열이 주어지면 모든 요소는 하나를 제외하고 두 번 나타난다. 그 하나를 찾기.
문제 난이도 : Very Easy
소요 시간 : 00시간 40분 
*/

#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        
        return nums.back();
    }
};

int main() {
    vector <int> nums = {4,1,2,1,2};
    Solution solution;
    cout << solution.singleNumber(nums) << endl;

    return 0; 
}
