[page](https://programmers.co.kr/learn/courses/30/lessons/12973)

    def solution(s):

        result=[]
        for i in range(len(s)):
            if len(result)==0:
                result.append(s[i])
            elif s[i]==result[-1]:
                del result[-1]
            elif s[i]!=result[-1]:
                result.append(s[i])

        if len(result)==0:
            answer=1
        if len(result)!=0:
            answer=0

        return answer
