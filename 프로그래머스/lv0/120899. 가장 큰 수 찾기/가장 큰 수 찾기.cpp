#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int n = array[0];
    int idx = 0;
    
    for(int i=1; i<array.size(); i++){
        if(array[i]>n){
            n=array[i];
            idx=i;
        }
    }
    answer.push_back(n);
    answer.push_back(idx);

    return answer;
}