[page](https://programmers.co.kr/learn/courses/30/lessons/77884)

py

    def solution(left, right):

        result=0
        for i in range(left,right+1):
            count=0
            for j in range(1,i+1):
                if i%j==0:
                    count+=1
            if count%2!=0:
                result-=i
            elif count%2==0:
                result+=i

        answer=result
        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    int solution(int left, int right)
    {
        int answer = 0;
        for(int i=left;i<right+1;i++)
        {
            int a=0;
            for(int j=1;j<=i;j++)
            {
                if(i%j==0) a+=1;
            }
            if(a%2==0) answer+=i;
            else answer-=i;
        }
        printf("%d",answer);
        return answer;
    }
