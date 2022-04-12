[page](https://programmers.co.kr/learn/courses/30/lessons/86051)

    def solution(numbers):

        data=list(range(0,10))

        for i in numbers:
            if i in data:
                data.remove(i)

        result=sum(data)

        answer = result
        return answer




    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    // numbers_len은 배열 numbers의 길이입니다.
    int solution(int numbers[], size_t numbers_len) {

        int answer = 0;
        for(int j=0;j<10;j++)
        {
            int bul=0;
            for(int i=0;i<numbers_len;i++)
            {
                if(numbers[i]==j)
                {
                    bul=1;
                    break;
                }
            }
            if(bul==0)
            {
                answer+=j;   
            }
        }

        return answer;
    }
