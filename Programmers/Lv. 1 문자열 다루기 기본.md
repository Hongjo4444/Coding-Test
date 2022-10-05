[page](https://programmers.co.kr/learn/courses/30/lessons/12918)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    bool solution(const char* s)
    {
        bool answer = true;
        char data[9];
        strcpy(data,s);
        int data_len=strlen(data);
        if(data_len==4 || data_len==6)
        {
            for(int i=0;i<data_len;i++)
            {
                if(isdigit(data[i])==0)
                {
                    answer=false;
                }
            }
        }
        else
        {
            answer=false;
        }
        // printf(answer? "true":"false");
        return answer;
    }
