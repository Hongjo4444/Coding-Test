[page](https://programmers.co.kr/learn/courses/30/lessons/76501)

py

    def solution(absolutes, signs):

        result=[]
        for i in range(len(signs)):
            if signs[i]==True:
                result.append(+absolutes[i])
            else:
                result.append(-absolutes[i])
        answer=sum(result)

        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    // absolutes_len은 배열 absolutes의 길이입니다.
    // signs_len은 배열 signs의 길이입니다.
    int solution(int absolutes[], size_t absolutes_len, bool signs[], size_t signs_len) {
        int answer = 0;
        for(int i=0;i<absolutes_len;i++)
        {
            if(signs[i]==true)
            {
                answer+=absolutes[i];
            }
            else
            {
                answer-=absolutes[i];
            }
        }
        return answer;
    }
