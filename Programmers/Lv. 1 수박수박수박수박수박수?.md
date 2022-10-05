[page](https://programmers.co.kr/learn/courses/30/lessons/12922)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    char* solution(int n)
    {
        // 리턴할 값은 메모리를 동적 할당해주세요.
        char* answer = (char*)malloc(sizeof(char*)*n);
        strcpy(answer, "\0"); //malloc 함수로 동적할당을 받으면 초기화하지 않을 때까지 쓰레기 값이 들어가 있다 -> 반드시 NULL로 초기화를 해주기
        for(int i=0;i<n;i++)
        {
            if(i==0 || i%2==0)
            {
                strcat(answer,"수");
            }
            else
            {
                strcat(answer,"박");
            }
        }
        printf("%s",answer);
        return answer;
    }
