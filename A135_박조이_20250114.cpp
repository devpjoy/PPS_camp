/* 
작성자 : 박조이 (22200313) 
문제 번호 : A135
문제 제목 : 베스트셀러 (by 백준)
문제 난이도 : Very Easy
소요 시간 : 00시간 52분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main () {
    int n;
    cin >> n;

    vector<string> list;

    for (int i = 0; i < n; i ++) {
        string name;
        cin >> name;
        list.push_back(name);
    }

    cout << endl;

    sort(list.begin(), list.end());

    for (int i = 0; i < list.size(); i ++) {
        cout << list[i] << " ";
    }

    cout << endl;

    vector<vector<int>> count(list.size(), vector<int>(2));
    int j = 1;

    for (int i = 0; i < list.size(); i ++) {
        if (list[i] == list[i + 1]) {
            if (list[i - 1] != list[i]) {
                count[j][0] += 2;
            }
            else {
                count[j][0] ++;
                count[j][1] = i;    
            }
        } else {
            j ++;
            count[j - 1][1] = i;
        }
    }

    int max = 0;

    for (int i = 0; i < count.size(); i ++) {
        if (count[i][0] > max) {
            max = count[i][0];
        }
    }

    int min_idx = list.size() - 1; 
    
    for (int i = 0; i < count.size(); i ++) {
        if (count[i][0] == max) {
            if (count[i][1] < min_idx) {
                min_idx = count[i][1];
            }
        }
    }

    cout << list[min_idx] << endl;

    return 0;
}