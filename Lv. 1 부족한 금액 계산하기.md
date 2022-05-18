[page](https://programmers.co.kr/learn/courses/30/lessons/82612)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    long long solution(int price, int money, int count)
    {
        long long answer = 0;
        long sum=0; // 범위 넘어갈 수 있으므로 long 타입으로 해야함
        for(int i=1;i<=count;i++)
        {
            sum+=(i*price);
        }
        // printf("%ld",sum);
        if(money<sum)
        {
            answer=sum-money;
        }
        return answer;
    }
