[page](https://programmers.co.kr/learn/courses/30/lessons/12934)

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <math.h>

    long long solution(long long n)
    {
        long long answer = -1;
        for(int i=1;i<=sqrt(n);i++)
        {
            if(n==pow(i,2))
            {
                answer=pow(i+1,2);
            }
        }
        printf("%lld",answer);
        return answer;
    }
