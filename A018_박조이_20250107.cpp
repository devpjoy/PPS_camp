/* 
작성자 : 박조이 (22200313) 
문제 번호 : A018
문제 제목 : 보물 (by 백준)
문제 설명 : 정수 배열 A와 B의 각 값을 곱하는 프로그램이다. 결과 값을 가장 작게 만들기 위해 A의 수를 재배열하여 최솟값을 출력하는 문제
문제 난이도 : Very Easy
소요 시간 : 00시간 20분 
*/

#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int input_a;
    int input_b;

    vector<int> a;
    vector<int> b;

    //a 배열에 입력받은 원소 값 넣기
    for (int i = 0; i < n; i ++) {
        cin >> input_a;
        a.push_back(input_a);
    }

    //b 배열에 입력받은 원소 값 넣기
    for (int i = 0; i < n; i ++) {
        cin >> input_b;
        b.push_back(input_b);
    }

    cout << "\n";

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int temp;
    for (int i = 0; i < n / 2; i ++) {
        temp = b[i];
        b[i] = b[n - 1 -i];
        b[n - 1 -i] = temp;
    }

    int sum = 0;

    for (int i = 0; i < n; i ++) {
        sum += a[i] * b[i];
    }

    cout << sum << endl;
    return 0;
}
