[page](https://programmers.co.kr/learn/courses/30/lessons/42883?language=python3)

py

    def solution(number, k):

        i=1

        for _ in range(1,len(number)):
            if number[i]>number[i-1]:
                while number[i]>number[i-1]:
                    number=number[:i-1]+number[i:]
                    k-=1
                    i-=1
                    if k==0 or i==0:
                        break
            if k==0:
                break
            i+=1

        for _ in range(k):
            number=number[:-1]

        answer=''.join(number)

        return answer
        
c

s
