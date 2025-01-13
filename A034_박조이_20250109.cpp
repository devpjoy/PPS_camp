/* 
작성자 : 박조이 (22200313) 
문제 번호 : A034
문제 제목 : 나머지 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 14분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int arr1[10];
    
    for (int i = 0; i < 10; i ++) {
        cin >> arr1[i];
    }

    vector<int> v(10);

    for (int i = 0; i < 10; i ++) {
        v[i] = arr1[i] % 42;
    }

    //나머지로 가능한 수 = 0부터 41까지
    sort(v.begin(), v.end());
    int count = 0;

    for (int i = 1; i < 10; i ++) {
        if (v[i] != v[i + 1]) {
            count ++;
        }
        else if (v[0] == v[9]) {
            count = 1;
        }
    }

    cout << endl;
    cout << count << endl;

    return 0;
}