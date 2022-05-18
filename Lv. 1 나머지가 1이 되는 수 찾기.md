[page](https://programmers.co.kr/learn/courses/30/lessons/87389)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    int solution(int n)
    {
        int answer = 0;
        for(int i=1;i<=n;i++)
        {
            if(n%i==1)
            {
                answer=i;
                break;
            }
        }
        printf("%d",answer);
        return answer;
    }
