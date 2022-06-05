[page](https://programmers.co.kr/learn/courses/30/lessons/12945)

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
        int data[100001]={};
        data[0]=0;
        data[1]=1;
        for(int i=2;i<n+1;i++)
        {
            data[i]=((data[i-2]%1234567)+(data[i-1]%1234567))%1234567; //(A+B)%C = ((A%C)+(B%C))%C (모듈러 연산의 성질)
        }
        printf("%d",data[n]);
        answer=data[n];
        return answer;
    }
