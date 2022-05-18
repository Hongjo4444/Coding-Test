[page](https://programmers.co.kr/learn/courses/30/lessons/12912)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    long long solution(int a, int b)
    {
        long long answer = 0;
        if(a>b)
        {
            int temp;
            temp=a;
            a=b;
            b=temp;
        }
        for(int i=a;i<=b;i++)
        {
            answer+=i;
        }
        // printf("%lld",answer);
        return answer;
    }
