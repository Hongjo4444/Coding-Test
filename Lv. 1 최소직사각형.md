[page](https://programmers.co.kr/learn/courses/30/lessons/86491)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    // sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
    int solution(int** sizes, size_t sizes_rows, size_t sizes_cols)
    {
        int answer = 0;
        int width=0, height=0, temp;

        for(int i=0;i<sizes_rows;i++)
        {
            if(sizes[i][0]<sizes[i][1])
            {
                temp=sizes[i][0];
                sizes[i][0]=sizes[i][1];
                sizes[i][1]=temp;
            }
            if(sizes[i][0]>width) width=sizes[i][0];
            if(sizes[i][1]>height) height=sizes[i][1];
        }

        answer=width*height;
        return answer;
    }
