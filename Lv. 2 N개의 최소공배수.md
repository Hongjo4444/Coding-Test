[page](https://programmers.co.kr/learn/courses/30/lessons/12953)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    // arr_len은 배열 arr의 길이입니다.
    int solution(int arr[], size_t arr_len)
    {
        int answer = 0;
        int max_num=0;
        for(int i=0;i<arr_len;i++)
        {
            if(arr[i]>max_num) max_num=arr[i];
        }
        // printf("%d",max_num);

        int multiple=1;
        bool all=false;
        while (all==false)
        {
            all=false;
            for(int j=0;j<arr_len;j++)
            {
                if((max_num*multiple)%arr[j]==0) all=true;
                else
                {
                    all=false;
                    break;
                }
            }
            if(all==true) break;
            else multiple+=1;
        }
        answer=max_num*multiple;
        printf("%d",answer);
        return answer;
    }
