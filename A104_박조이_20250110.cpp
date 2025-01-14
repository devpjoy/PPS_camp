/* 
작성자 : 박조이 (22200313)  
문제 번호 : A104
문제 제목 : 욱제는 효도쟁이야!! (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 10분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> cost(n);
    int max = cost[0];

    for (int i = 0; i < n; i ++) {
        cin >> cost[i];
        if (cost[i] > max) {
            max = cost[i];
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i ++) {
        sum += cost[i];
    }

    sum -= max;
    cout << sum << endl;
    return 0;
}