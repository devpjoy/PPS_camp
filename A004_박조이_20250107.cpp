/* 
작성자 : 박조이 (22200313)  
문제 번호 : A004 
문제 제목 : 나누어 떨어지는 숫자 배열 (by programmers)
문제 난이도 : Very Easy
소요 시간 : 00시간 12분 
*/

#include <iostream> 
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    sort(arr.begin(), arr.end()); 

    for (int i = 0; i < arr.size(); i ++) { 
        if (arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }

    if (answer.empty()) answer.push_back(-1);
    return answer;
}

int main() {
    vector<int> input = {10,8,6,4,2,9,7,5,3,1};
    vector<int> result = solution(input, 5);

    for (int i = 0; i < result.size(); i ++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0; 
}
