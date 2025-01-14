/* 
작성자 : 박조이 (22200313)  
문제 번호 : A126
문제 제목 : 한수 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 01시간 00분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    if (n > 1000) {
        cout << "It should be (n <= 1000)" << endl; 
        return 0; 
    }

    int count = 0;

    int arr[3];

    for (int i = 1; i <= n; i ++) {
        if (i < 100) { // i가 세 자리 수 인 경우
            count ++;
        }
        else if (i < 1000) {
            int num = i;
            arr[0] = num / 100; // arr[0] : 백의 자리
            num %= 100; 
            if (num >= 10) {
                arr[1] = num / 10; // arr[1] : 십의 자리
                num %= 10;
            }
            arr[2] = num; // arr[2] : 일의 자리
                
            if ((arr[0] - arr[1]) == (arr[1] - arr[2])) {
                count ++;
            }
        }

        if (i == 1000) {
            count --;
        }
    }

    cout << count << endl;
    return 0;
}