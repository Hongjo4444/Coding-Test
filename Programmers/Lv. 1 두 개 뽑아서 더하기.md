[page](https://programmers.co.kr/learn/courses/30/lessons/68644?language=c)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    // numbers_len은 배열 numbers의 길이입니다.
    int* solution(int numbers[], size_t numbers_len)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        int* answer = (int*)malloc(sizeof(int)*200);
        int size=0;
        int cnt=0;
        for(int i=0;i<numbers_len;i++)
        {
            for(int j=i+1;j<numbers_len;j++)
            {
                int tmp=numbers[i]+numbers[j];
                int flag=1; //중복 제거
                for(int k=0;k<cnt;k++)
                {
                    if(answer[k]==tmp)
                    {
                        flag=0;
                    }
                }
                if(flag==1)
                {
                    answer[cnt++]=tmp;
                }
            }
        }

        for(int i=0;i<cnt;i++)
        {
            for(int j=i+1;j<cnt;j++)
            {
                if(answer[i] > answer[j])
                {
                    int temp = answer[i];
                    answer[i] = answer[j];
                    answer[j] = temp;
                }
            }
        }

        return answer;
    }
