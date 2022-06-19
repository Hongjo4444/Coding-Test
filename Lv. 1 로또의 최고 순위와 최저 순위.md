[page](https://programmers.co.kr/learn/courses/30/lessons/77484)

py

    def solution(new_id):    

        ok=['-','_','.']
        ng=['~','!','@','#','$','%','^','&','*','(',')','=','+','[','{',']','}',':','?',',','<','>','/']

        new_id=new_id.lower()

        result=[]
        for i in new_id:
            if i not in ng:
                result.append(i)
        new_id=result
        result=[]

        for j in range(len(new_id)):
            if j>0 and new_id[j]=='.' and new_id[j-1]=='.':
                continue
            else:
                result.append(new_id[j])

        if len(result)>=1 and result[0]=='.':
            del result[0]
        if len(result)>=1 and result[-1]=='.':
            del result[-1]

        if len(result)==0:
            result.append('a')

        if len(result)>15:
            result=result[:15]
        if len(result)>=1 and result[-1]=='.':
            del result[-1]

        while len(result)<=2:
            result.append(result[-1])

        result=''.join(result)

        answer = result
        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>
    #include <string.h>

    // lottos_len은 배열 lottos의 길이입니다.
    // win_nums_len은 배열 win_nums의 길이입니다.
    int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        int* answer = (int*)malloc(sizeof(int)*2);
        int zero_count=0;
        int right=0;
        for(int i=0;i<lottos_len;i++)
        {
            if(lottos[i]==0)
            {
                zero_count+=1;
                continue;
            }
            for(int j=0;j<win_nums_len;j++)
            {
                if(lottos[i]==win_nums[j])
                {
                    right+=1;
                    continue;
                }
            }
        }

        answer[0]=7-zero_count-right;
        if(answer[0]>=6) answer[0]=6;
        answer[1]=7-right;
        if(answer[1]>=6) answer[1]=6;

        return answer;
    }

c++

    #include <string>
    #include <vector>
    #include <iostream>
    #include <algorithm>

    using namespace std;

    vector<int> solution(vector<int> lottos, vector<int> win_nums)
    {
        vector<int> answer(2);
        int zero=count(lottos.begin(),lottos.end(),0);
        // cout << zero;

        int win=0;
        for(int i=0;i<win_nums.size();i++)
        {
            int temp_win=count(lottos.begin(),lottos.end(),win_nums[i]);
            if(temp_win!=0)
            {
                win+=1;
            }
        }
        // cout << win;

        int maxi=zero+win;
        int mini=win;

        if(maxi>=2) answer[0]=7-maxi;
        else answer[0]=6;
        if(mini>=2) answer[1]=7-mini;
        else answer[1]=6;

        // cout << answer[1];
        return answer;
    }
