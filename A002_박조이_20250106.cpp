//A002 : Pascal's Triangle (leetcode) - Easy
/* 파스칼 삼각형의 rowNumber가 주어졌을 때, 그 삼각형의 각 값을 배열의 형태로 return하는 함수를 작성한다. */
/* 1시간 소요 */


#include <iostream> 
#include <vector>

using namespace std;

class Solution { 
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);

        for (int j = 0; j < numRows; j ++) {
            v[j].resize(j + 1); 
            v[j][0] = 1;
            for (int i = 1; i < j; i ++) {
                v[j][i] = v[j - 1][i - 1] + v[j - 1][i];
            }
            v[j][j] = 1;
        }

        return v;
    }
};

int main() {
    Solution solution;
    int numRows = 5;

    if (numRows > 30) {
        cout << "numRows must not larger than 30." << endl;
    } else {
        vector<vector<int>> result = solution.generate(numRows);
        
        cout << "[";
        for (int i = 0; i < result.size(); i++) {
            cout << "[";
            for (int j = 0; j < result[i].size(); j++) { 
                cout << result[i][j];
                if (j != result[i].size() - 1) cout << ","; 
            }
            cout << "]";
            if (i != result.size() - 1) cout << ",";
        }
        cout << "]" << endl;
    }

    return 0; 
}
