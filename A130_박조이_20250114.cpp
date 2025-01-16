/* 
작성자 : 박조이 (22200313)  
문제 번호 : A130
문제 제목 : 제로 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 07분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int k;
    cin >> k;

    vector<int> v; 

    for (int i = 0; i < k; i ++) {
        int n;
        cin >> n;
        if (n == 0) v.pop_back(); 
        else v.push_back(n);
    }

    cout << endl;

    int sum = 0;

    for (int i = 0; i < v.size(); i ++) {
        sum += v[i];
    }

    cout << sum << endl;
    return 0;
}