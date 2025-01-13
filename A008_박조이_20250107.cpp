/* 
작성자 : 박조이 (22200313) 
문제 번호 : A008
문제 제목 : 평균은 넘겠지 (by 백준)
문제 설명 : 테스트 케이스(학생들의 점수)를 입력 받고 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여
        소수점 셋째 자리까지 출력한다.
문제 난이도 : Very Easy
소요 시간 : 01시간 10분 
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test_num;
    cin >> test_num;

    int people;
    int grade;
    double sum = 0;

    vector<vector<int>> v(test_num);
    vector<float> average;

    //입력 받음
    for (int i = 0; i < test_num; i ++) {
        cin >> people;
        v[i].push_back(people);

        for (int j = 0; j < people; j ++) {
            cin >> grade;
            v[i].push_back(grade);
        }
    }

    //평균 구하기 
    for (int i = 0; i < test_num; i ++) {
        for (int j = 1; j <= v[i][0]; j ++) {
            sum += v[i][j];
        }
        average.push_back(sum / v[i][0]);
        sum = 0;
    }

    //평균을 넘는 학생들의 수 구하기
    vector<float> great_people(test_num, 0);

    for (int i = 0; i < test_num; i++) {
        for (int j = 1; j <= v[i][0]; j++) { 
            if (v[i][j] > average[i]) {
                great_people[i]++;
            }   
        }
    }

    //평균을 넘는 학생들의 비율을 구하기
    for (int i = 0; i < great_people.size(); i ++) {
        great_people[i] = great_people[i] / v[i][0] * 100.0;
    }

    cout << "\n\n";

    //출력
    for (int i = 0; i < great_people.size(); i ++) {
        printf("%.3f\n", great_people[i]);
    }

    return 0; 
}
