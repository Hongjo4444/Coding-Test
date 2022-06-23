#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int sizes[][2], int numbers[], size_t numbers_len,char* len,int str_len_s,int str_len_i)
{
    printf("%d\n",sizes[1][0]); //오류 발생(출력값이 안맞음)
    printf("%d %d %s %d %d",numbers[3],numbers_len,len,str_len_s,str_len_i);
    return 0;
}

int main()
{
    int sizes[][2]={{60,50},{30,70},{60,30},{80,40}}; //입력이 2차원 배열일때2
    int numbers[]={1,2,3,4,6,7,8,0}; //입력이 배열일때
    size_t numbers_len=sizeof(numbers)/sizeof(int); //입력이 배열일때 배열의 크기
    char* len="1924"; //입력이 문자열일때
    int  str_len_s=strlen(len); //입력이 문자열일때 문자열 길이
    int  str_len_i=sizeof(len)/sizeof(int); //틀린것

    solution(sizes,numbers,numbers_len,len,str_len_s,str_len_i);
    return 0;
}
