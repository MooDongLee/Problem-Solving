def solution(strings, n):
    
    sort_list = []
    for s in strings:
        sort_list.append(s[n] + ':' + s)
    sort_list = sorted(sort_list)
    
    answer = []
    for s in sort_list:
        a = s.split(':')
        answer.append(a[1])
        
    return answer