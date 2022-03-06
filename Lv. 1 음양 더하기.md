[page](https://programmers.co.kr/learn/courses/30/lessons/76501)

    def solution(absolutes, signs):

        result=[]
        for i in range(len(signs)):
            if signs[i]==True:
                result.append(+absolutes[i])
            else:
                result.append(-absolutes[i])
        answer=sum(result)

        return answer
