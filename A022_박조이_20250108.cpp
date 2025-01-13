/* 
작성자 : 박조이 (22200313) 
문제 번호 : A022
문제 제목 : 핸드폰 요금 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 22분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> time;

    int Y_fee = 0;
    int M_fee = 0; 

    for (int i = 0; i < n; i ++) {
        int t;
        cin >> t;
        time.push_back(t);
    }

    for (int i = 0; i < n; i ++) {
        if (time[i] <= 29) {
            Y_fee += 10;
        } else if (time[i] >= 30 && time[i] < 60) {
            Y_fee += 20;
        } else if (time[i] >= 60) {
            Y_fee += 30; //60초 61초는 30을 더해야 함.
            //근데 10000초 같은 경우에는?
        }
    }

    for (int i = 0; i < n; i ++) {
        if (time[i] <= 59) {
            M_fee += 15;
        } else if (time[i] >= 60 && time[i] < 120) {
            M_fee += 30;
        } else if (time[i] >= 119) {
            //61초와 같은 경우
        }

    }

    if (Y_fee < M_fee) {
        cout << "Y " << Y_fee << endl; 
    } else if (Y_fee > M_fee) {
        cout << "M " << M_fee << endl; 
    } else if (Y_fee == M_fee) {
        cout << "Y M " << Y_fee << endl;
    }

    return 0;
}

