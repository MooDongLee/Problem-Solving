import math

def solution(a, b):
    gcd = math.gcd(a, b) # 분모, 분자의 최대공약수를 구해 b를 최대공약수로 나눔
    b //= gcd
    
    num = [] # 소인수 저장
    i = 2
    while i <= b: # 소인수 구하기
        if b % i == 0:
            b //= i
            num.append(i)
        else:
            i += 1
    
    if all(i in [2,5] for i in num): # 소인수가 2와 5만 존재하면 유한소수 그렇징 않으면 무한소수
        return 1
    return 2