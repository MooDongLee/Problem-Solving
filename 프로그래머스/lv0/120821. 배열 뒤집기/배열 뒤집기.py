def solution(num_list):
    answer=[]
    for i in range(len(num_list)):
        a = num_list[(len(num_list)-(i+1))]
        answer.append(a)
    return answer