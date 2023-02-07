def solution(numbers):
    answer = 0
    answerlist = sorted(numbers, reverse=True)
    answer = answerlist[0] * answerlist[1]
    return answer