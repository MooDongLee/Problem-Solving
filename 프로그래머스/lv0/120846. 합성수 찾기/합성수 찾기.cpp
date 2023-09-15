#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int prime[101];

int solution(int n) {
    int answer = 0;
    
    for(int i=2; i<=n; i++)
        for(int j=i*2; j<=n; j+=i)
            if(prime[j]==0) prime[j]=1;
    for(int i=2; i<=n; i++)
        if(prime[i]==1) answer++;
    
    return answer;
}
