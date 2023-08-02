#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book)
{
    // 1. HashMap을 만든다.
    unordered_map<string, int> map;
    for (int i = 0; i < phone_book.size(); i++)
        map[phone_book[i]] = 1;

    // 2. 모든 전화번호의 substring이 HashMap에 존재하는지 확인한다.
    for (int i = 0; i < phone_book.size(); i++)
    {
        for (int j = 0; j < phone_book[i].size() - 1; j++)
        {
            string phone_number = phone_book[i].substr(0, j + 1);
            if (map[phone_number])
                return false;
        }
    }

    // 3. 여기까지 오면 접두어가 없다는 것이다.
    return true;
}

// #include <string>
// #include <vector>
// #include <algorithm>
// #include <iostream>
// using namespace std;

// bool solution(vector<string> phone_book)
// {
//     // 1. phoneBook 배열을 정렬한다.
//     sort(phone_book.begin(), phone_book.end());

//     // 2. 1중 Loop을 돌며 앞 번호가 뒷 번호의 접두어인지 확인한다.
//     for (int i = 0; i < phone_book.size() - 1; i++)
//         if (phone_book[i + 1].find(phone_book[i]) == 0)
//             return false;

//     // 3. 여기까지 오면 접두어가 없다는 것이다.
//     return true;
// }