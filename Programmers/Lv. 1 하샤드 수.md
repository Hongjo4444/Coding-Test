[page](https://programmers.co.kr/learn/courses/30/lessons/12947)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    bool solution(int x)
    {
        bool answer = true;
        int x_origin=x;
        int sum_element=0;
        int element;
        while(x!=0)
        {
            element=x%10;
            x=x/10;
            sum_element+=element;
        }
        // printf("%d",sum_element);
        if(x_origin%sum_element!=0)
        {
            answer=false;
        }
        return answer;
    }
