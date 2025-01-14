/* 
작성자 : 박조이 (22200313) 
문제 번호 : A105
문제 제목 : 쉽게 푸는 문제 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 20분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n, m;
    int sum1 = 0; //1부터 n까지 다 더한 값
    int sum2 = 0; //1부터 m까지 다 더한 값
    // 최종적인 값은 sum2 - sum1이다.

    cin >> n >> m;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < i; j ++) {
            v1.push_back(i);
        }
    }

    for (int i = 0; i < n; i ++) {
        sum1 += v1[i];
    }

    for (int i = 0; i < m; i ++) {
        for (int j = 0; j < i; j ++) {
            v2.push_back(i);
        }
    }

    for (int i = 0; i < m; i ++) {
        sum2 += v2[i];
    }

    sum1 -= v1[n - 1];
    cout << sum1 << endl;
    cout << sum2 << endl;

    int sum = sum2 - sum1;
    cout << sum << endl;
    return 0;
}