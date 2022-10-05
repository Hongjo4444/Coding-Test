[page](https://programmers.co.kr/learn/courses/30/lessons/12930)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    char* solution(const char* s)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        char* answer = (char*)malloc(sizeof(char*)*strlen(s));
        strcpy(answer,s);
        int n=0;
        for(int i=0;i<strlen(answer);i++)
        {
            // printf("%d",n);
            if(answer[i]==' ')
            {
                n=0;
                continue;
            }
            if(n==0 || n%2==0)
            {
                if(answer[i]>='a' && answer[i]<='z')
                {
                    answer[i]-=32;
                    n+=1;
                }
                else
                {
                    n+=1;
                    continue;
                }
            }
            else if(n%2==1)
            {
                if(answer[i]>='A' && answer[i]<='Z')
                {
                    answer[i]+=32;
                    n+=1;
                }
                else
                {
                    n+=1;
                    continue;
                }
            }
        }
        // printf("%s",answer);
        return answer;
    }
