def solution(sides):
    newsides = sorted(sides)
    if (newsides[0] + newsides[1]) > newsides[2]:
        answer = 1
    else:
        answer = 2
    return answer