[page](https://programmers.co.kr/learn/courses/30/lessons/62048)

    def solution(w,h):
        from math import gcd

        result=w*h-(w+h-gcd(w,h)) #w+h는 밑까지 가는거리, gcd늨 매 시작점 겹치는부분 갯수

        answer = result
        return answer
