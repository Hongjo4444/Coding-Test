[page](https://programmers.co.kr/learn/courses/30/lessons/12932)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    int* solution(long long n)
    {
        char string[12]; //⭐️11자리 숫자일경우 '\0'자리까지 12칸으로 만들어줘야함
        sprintf(string,"%lld",n);
        int str_len=strlen(string);
        // printf("%d",str_len);
        // 리턴할 값은 메모리를 동적 할당해주세요.
        int* answer = (int*)malloc(sizeof(int)*str_len); //⭐️number만 주면 갯수에 4byte를 곱해주시지 않아서 다 들어가기에는 자리가 부족->sizeof(int)*number로 해야함

        for(int i=0;i<str_len;i++)
        {
            answer[i]=n%10;
            n=n/10;
        }
        // for(int i=0;i<str_len;i++)
        // {
        //     printf("%d",answer[i]);
        // }

        return answer;
        free(answer);
    }
