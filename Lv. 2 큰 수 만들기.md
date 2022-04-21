[page](https://programmers.co.kr/learn/courses/30/lessons/42883?language=python3)

py

    def solution(number, k):

        i=1

        for _ in range(1,len(number)):
            if number[i]>number[i-1]:
                while number[i]>number[i-1]:
                    number=number[:i-1]+number[i:]
                    k-=1
                    i-=1
                    if k==0 or i==0:
                        break
            if k==0:
                break
            i+=1

        for _ in range(k):
            number=number[:-1]

        answer=''.join(number)

        return answer
        
c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    char* solution(const char* number, int k)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        char* answer = (char*)malloc(strlen(number));
        strcpy(answer,number);
        // printf("%s",number);
        char front;
        char back;
        char* temp;
        if(k>0)
        {
            int start=0;
            while(k>0)
            {
                front=answer[start];
                back=answer[start+1];
                printf("%c %c",front,back);
                if(strcmp(front,back)>=0)
                {
                    continue;
                }
                else if(strcmp(front,back)==-1)
                {
                    strtok_r(answer,back,temp);
                }
                k=0;
            }   
        }

        return answer;
        free(answer);
    }

    int main()
    {
        const char* number="1924";
        int k=2;

        solution(number,k);
        return 0;
    }
