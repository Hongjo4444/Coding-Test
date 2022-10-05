[page](https://programmers.co.kr/learn/courses/30/lessons/81301)

py

    def solution(s):

        num=['0','1','2','3','4','5','6','7','8','9']
        num_eng=['zero','one','two','three','four','five','six','seven','eight','nine']

        start=0
        end=1
        result=[]
        while start+end<=len(s):
            if s[start] in num:
                result.append(s[start])
                start=start+1
                end=1
            elif s[start:start+end] in num_eng:
                for i in range(10):
                    if s[start:start+end]==num_eng[i]:
                        result.append(num[i])
                start=start+end
                end=1
            else:
                end+=1

        result=''.join(result)
        result=int(result)

        answer = result
        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <math.h>

    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    int solution(const char* s)
    {
        int answer = 0;
        int s_len=strlen(s);
        // printf("%d",s_len);
        char* eng[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
        char num[10]={'0','1','2','3','4','5','6','7','8','9'};
        // printf("%d",num[0]);
        // printf("%s",eng[1]);

        char result[11]=""; //⭐️초기값 지정 필요함
        int order=0;
        char temp[6]=""; //⭐️초기값 지정 필요함
        int order_temp=0;
        for(int i=0;i<s_len;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                result[order]=s[i];
                order+=1;
            }
            else if(97<=s[i] && s[i]<=127)
            {
                temp[order_temp]=s[i];
                order_temp+=1;
            }
            // printf("%s\n",temp);
            for(int j=0;j<10;j++)
            {
                if(strcmp(temp,eng[j])==0)
                {
                    result[order]=num[j];
                    order+=1;
                    memset(temp,'\0',6);
                    order_temp=0;
                    break;
                }
            }
        }
        // printf("result=%s\n",result);
        int set=0;
        for(int k=0;k<strlen(result);k++)
        {
            answer=answer*10+(result[k]-48);
        }
        printf("%d",answer);
        return answer;
    }
