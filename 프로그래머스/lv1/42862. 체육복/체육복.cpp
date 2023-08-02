#include <iostream>
#include <string>
#include <vector>

using namespace std;
int student[32];
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    // 1. reserve / lost 배열 정보 반영
    for (int r : reserve)
        student[r]++;
    for (int l : lost)
        student[l]--;
    
    // 2. 여분을 기준으로 확인하여 체육복을 빌려준다.
    for(int i = 1; i<=n; i++){
        if(student[i] > 0){
            int front = i - 1;
            int back = i + 1;
            if (student[front] < 0){
                student[i]--;
                student[front]++;
            }
            else if (student[back] < 0){
                student[i]--;
                student[back]++;
            }
        }
    }
    
    // 3. 체육복을 갖고 있는 학생 수를 계산한다.
    for (int i = 1; i<=n; i++){
        if(student[i] >= 0)
            answer++;
    }
    return answer;
}