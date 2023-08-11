#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    int answer = 0;
    array.push_back(height);
    
    sort(array.begin(), array.end(), greater<>()); // 내림차순 정렬
    
    for(int i=0; i<array.size(); i++){
        if(height==array[i]){
            answer=i;
            break;
        }
    }
    
    return answer;
}