[page](https://programmers.co.kr/learn/courses/30/lessons/62048)

    def solution(w,h):
        from math import gcd

        result=w*h-(w+h-gcd(w,h))

        answer = result
        return answer
