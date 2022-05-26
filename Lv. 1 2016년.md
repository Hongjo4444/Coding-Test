[page](https://programmers.co.kr/learn/courses/30/lessons/12901)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    char* solution(int a, int b)
    {
        // 리턴할 값은 메모리를 동적 할당해주세요.
        char* answer = (char*)malloc(sizeof(char*)*3);
        strcpy(answer, "\0");
        char* day[]={"THU","FRI","SAT","SUN","MON","TUE","WED"};
        for(int i=1;i<a+1;i++)
        {
            if(i==1)
            {
                continue;
            }
            else if(i==3)
            {
                b+=29;
            }  
            else if(i==2||i==4||i==6||i==8||i==9||i==11)
            {
                b+=31;
            }
            else
            {
                b+=30;
            }
        }
        // printf("%d %d %s",b,b%7,day[b%7]);
        answer=day[b%7];
        return answer;
    }
