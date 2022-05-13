[page](https://programmers.co.kr/learn/courses/30/lessons/12931)

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    int solution(int n)
    {
        int answer = 0;
        char str[10];
        sprintf(str,"%d",n);
        // printf("%s",str);
        int str_len=strlen(str);
        for(int i=0;i<str_len;i++)
        {
            // printf("%d",str[i]-48);
            answer+=str[i]-48;
        }
        return answer;
    }
