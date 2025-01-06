//A001 : Assign Cookies (leetcode) - Easy
/* 최대한 많은 아이들에게 만족할 만한 쿠키를 주어야 한다. 
쿠키 사이즈(int[] g)와 아이들이 만족하는 쿠키 사이즈 (int[] s)가 매개변수로 주어지는 함수를 작성한다. */
//적어도 하나의 쿠키는 주어야 한다.

/*
Input: g = [1,2,3], s = [1, 1]
Output: 1
Explanation: You have 3 children and 2 cookies. The greed factors of 3 children are 1, 2, 3. 
And even though you have 2 cookies, since their size is both 1, you could only make the child whose greed factor is 1 content.
You need to output 1.

Input: g = [5, 2, 4, 3, 1], s = [3, 1]
g = [1, 2, 3, 4, 5], s = [3, 5]
Output: 2

27분
*/


#include <iostream> 
#include <vector>

using namespace std;

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int output = 0;
        if (g.size() >= 1 && g.size() <= 30000 && s.size() >= 0 && s.size() <= 30000) {
            //오름차순으로 sort
            sort(g.begin(), g.end()); 
            sort(s.begin(), s.end());

            //g[i]는 한 아이가 원하는 최소 쿠키의 크기
            //s[j]는 쿠키의 사이즈
            //아이가 원하는 최소 쿠키의 크키보다 쿠키의 사이즈가 크거나 같아야 한다.
            //즉 g[i] <= s[j]
            //위의 사항을 만족시키면 output++을 시켜야 한다.
            int i = 0, j = 0;

            for (i = 0; i < g.size(); i++) {
                if (g[i] <= s[j] && j < s.size()) {
                    output++;
                    j++;
                }
            }
        }
        return output;
    }
};

int main() {
    vector<int> g = {1, 2};
    vector<int> s = {1, 2, 3};

    Solution solution;

    cout << "Output: " << solution.findContentChildren(g, s) << endl;

    return 0; 
}
