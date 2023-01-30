def solution(num_list):
    a = []
    b = []
    for i in range(len(num_list)):
        if (num_list[i] % 2) == 0:
            a.append(i)
        else:
            b.append(i)
    answer = [len(a), len(b)]
    return answer