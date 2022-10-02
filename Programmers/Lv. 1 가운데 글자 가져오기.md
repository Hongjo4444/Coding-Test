[page](https://programmers.co.kr/learn/courses/30/lessons/12903)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    char* solution(const char* s)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        char* answer = (char*)malloc(sizeof(char*)*3);
        int str_len=strlen(s);
        if(str_len%2==1)
        {
            int point=str_len/2;
            // printf("%d",point);
            char now=s[point];
            answer[0]=now;
            answer[1]='\0'; //문자열 끝에 NULL 추가
        }
        else
        {
            int point=(str_len/2)-1;
            // printf("%d",point);
            for(int i=0;i<2;i++)
            {
                char now=s[point];
                answer[i]=now;
                point+=1;
            }
            answer[2]='\0'; //문자열 끝에 NULL 추가
        }
        printf("%s",answer);
        return answer;
    }
