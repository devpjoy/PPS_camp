/* 
작성자 : 박조이 (22200313)  
문제 번호 : A035 
문제 제목 : 화성 수학 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 38분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int t;
    cin >> t;

    float num;
    vector<float> num_v;

    string str; 
    vector<string> oper;   

    for (int i = 0; i < t; i ++) {
        //숫자 입력 받음
        cin >> num;
        num_v.push_back(num);
        
        //연산자 입력 받음
        getline(cin, str);
        oper.push_back(str);
    }

    vector<float> result(t);

    for (int i = 0; i < t; i ++) {
        result[i] = num_v[i];
    }

    cout << endl;

    for (int i = 0; i < t; i ++) {
        for (int j = 0; j < oper[i].length(); j ++) {
            if (oper[i][j] == '@') result[i] *= 3;
            else if (oper[i][j] == '%') result[i] += 5;
            else if (oper[i][j] == '#') result[i] -= 7;
        }
    }

    for (int i = 0; i < t; i ++) {
        printf("%.2f\n", result[i]);
    }

    return 0;
}