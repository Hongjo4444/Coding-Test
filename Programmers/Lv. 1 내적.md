[page](https://programmers.co.kr/learn/courses/30/lessons/70128)

py

    def solution(a, b):

        result=[]
        for i in range(len(a)):
            result.append(a[i]*b[i])
        answer=sum(result)

        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    // a_len은 배열 a의 길이입니다.
    // b_len은 배열 b의 길이입니다.
    int solution(int a[], size_t a_len, int b[], size_t b_len) {
        int answer = 0;
        for(int i=0;i<a_len;i++)
        {
            answer+=a[i]*b[i];
        }
        return answer;
    }
