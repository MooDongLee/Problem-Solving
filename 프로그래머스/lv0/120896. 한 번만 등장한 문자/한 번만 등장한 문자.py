def solution(s):
    answer = ''
    a = list(s)
    for i in a:
        if a.count(i) == 1: 	# 만약 문자 i의 개수가 1개라면
            answer += i 		# i를 추가해준다.
    return ''.join(sorted(answer))