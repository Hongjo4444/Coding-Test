[page](https://programmers.co.kr/learn/courses/30/lessons/12944)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    // arr_len은 배열 arr의 길이입니다.
    double solution(int arr[], size_t arr_len) {
        double answer = 0;
        double sum=0;
        for(int i=0;i<arr_len;i++)
        {
            sum+=arr[i];
        }
        // printf("%f %d\n",sum,arr_len);
        answer=sum/arr_len;
        // printf("%.1f",answer);
        return answer;
    }
