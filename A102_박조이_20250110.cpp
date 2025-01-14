/* 
작성자 : 박조이 (22200313) 
문제 번호 : A102
문제 제목 : Transpose Matrix (by leetcode)
문제 난이도 : Very Easy
소요 시간 : 00시간 22분 
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int temp;
        for (int i = 0; i < matrix.size(); i ++) {
            for (int j = 0; j < i; j ++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        return matrix;
    }
};

int main () {
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    Solution solution;
    solution.transpose(matrix);

    for (int i = 0; i < matrix.size(); i ++) {
        for (int j = 0; j < matrix[i].size(); j ++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}