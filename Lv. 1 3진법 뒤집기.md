[page](https://programmers.co.kr/learn/courses/30/lessons/68935)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    int solution(int n)
    {
        int answer=0;
        int tempn=n;
        int xx=0;
        while(tempn>=3)
        {
            tempn=tempn/3;
            xx+=1;
        }
        // printf("%d\n",xx);

        while (n!=0)
        {
            int remain=n%3;
            int plus=remain*pow(3,xx);
            answer+=plus;
            xx-=1;
            n/=3;
        }
        // printf("%d",answer);

        return answer;
    }
