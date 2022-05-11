[page](https://programmers.co.kr/learn/courses/30/lessons/12943)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    int solution(int num)
    {
        int answer = 0;
        long new_num=num;
        while(new_num!=1)
        {
            if(answer>500)
            {
                answer=-1;
                break;
            }
            if(new_num%2==0)
            {
                new_num/=2;
            }
            else if(new_num%2!=0)
            {
                new_num=(new_num*3)+1;
            }
            answer+=1;
        }
        return answer;
    }
