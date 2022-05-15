[page](https://programmers.co.kr/learn/courses/30/lessons/12925)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    int solution(const char* s)
    {
        int answer = 0;
        answer=atoi(s);
        printf("%d",answer);
        return answer;
    }
