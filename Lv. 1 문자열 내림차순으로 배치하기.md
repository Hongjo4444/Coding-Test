[page](https://programmers.co.kr/learn/courses/30/lessons/12917)

c-방법1

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    char* solution(const char* s)
    {
        int s_len=strlen(s);
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        char* answer = (char*)malloc(sizeof(char*)*s_len);
        strcpy(answer,s); //malloc 함수로 동적할당을 받으면 초기화하지 않을 때까지 쓰레기 값이 들어가 있다 -> 반드시 NULL로 초기화를 해주기
        for(int i=0;i<strlen(s)-1;i++)
        {
            for(int j=i+1;j<strlen(s);j++)
            {
                if(answer[i]<answer[j])
                {
                    char temp = answer[i]; //⭐️char 형식으로 지정하면 문자열 인덱스로 받아도 그 값만 저장 가능하다.
                    answer[i] = answer[j];
                    answer[j] = temp;
                }
            }
        }
        return answer;
    }

c-방법2

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    char* solution(const char* s)
    {
        int s_len=strlen(s);
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        char* answer = (char*)malloc(sizeof(char*)*s_len);
        strcpy(answer, "\0"); //malloc 함수로 동적할당을 받으면 초기화하지 않을 때까지 쓰레기 값이 들어가 있다 -> 반드시 NULL로 초기화를 해주기
        int ascii_A=65;
        int ascii_z=122;
        int now=0;
        for(int i=ascii_z;i>=ascii_A;i--)
        {
            char now_ch=i;
            for(int j=0;j<s_len;j++)
            {
                if(s[j]==now_ch)
                {
                    answer[now]=now_ch;
                    now+=1;
                }
            }
        }
        // printf("%s",answer);
        return answer;
    }
