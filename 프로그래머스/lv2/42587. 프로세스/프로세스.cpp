#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct PrintJob{
    int priority;
    int location;
};

int solution(vector<int> priorities, int location)
{
    // 1. queue에 index 삽입
    queue<PrintJob> printer;
    for(int i=0; i < priorities.size(); i++){
        PrintJob job;
        job.location = i;
        job.priority = priorities[i];
        printer.push(job);
    }
    
    int turn = 0;
    while (!printer.empty()) {
        // 2. 0번을 꺼내서 max priority가 아니면 다시 끝에 넣기
        PrintJob job = printer.front();
        printer.pop();
        
        if (job.priority != *max_element(priorities.begin(), priorities.end()))
        {
            printer.push(job);
        } else {
            turn++;
            // 3. max Priority가 맞다면 내가 찾는 job이 맞는지 확인하기
            if (job.location == location)
                break;
            priorities[job.location] = 0;
        }
    }
    
    return turn;
}

// #include <iostream>
// #include <string>
// #include <vector>
// #include <queue>
// #include <algorithm>

// using namespace std;

// int solution(vector<int> priorities, int location)
// {
//     queue<int> printer;                         //queue에 index 삽입.
//     for(int i = 0; i< priorities.size(); i++)
//         printer.push(i);

//     int turn = 0;
//     while (!printer.empty())    {
//         // 2. 0번을 꺼내서 max priority가 이나면 다시 끝에 넣기
//         int idx = printer.front();
//         printer.pop();

//         if (priorities[idx] < *max_element(priorities.begin(), priorities.end()))        {
//             printer.push(idx);
//         } else {
//             turn++;
//             // 3. max Priority가 맞다면 내가 찾는 job이 맞는지 확인하기
//             if (location == 0)
//                 break;
//             priorities[idx] = 0;
//         }

//         location--;
//         if (location < 0)
//             location = printer.size() - 1;
//     }

//     return turn;
// }

// int main(void)
// {
//     vector<int> priorities = {2, 1, 3, 2};
//     cout << solution(priorities, 1);
//     return 0;
// }