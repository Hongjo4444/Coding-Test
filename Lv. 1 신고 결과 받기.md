[page](https://programmers.co.kr/learn/courses/30/lessons/92334)

py

    def solution(id_list, report, k):

        from collections import defaultdict
        data=defaultdict(list)
        for_stop=defaultdict(int)
        for i in report:
            i=i.split()
            if i[1] not in data[i[0]]:
                data[i[0]].append(i[1])
                for_stop[i[1]]+=1
        data=dict(data)
        for_stop=dict(for_stop)

        result=dict(defaultdict(int))
        for j in id_list:
            result[j]=0

        for j in for_stop.items():
            for m in data.items():
                if j[1]>=k and j[0] in m[1]:
                    result[m[0]]+=1

        stop=[]
        for l in result.values():
            stop.append(l)

        answer=stop
        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    // id_list_len은 배열 id_list의 길이입니다.
    // report_len은 배열 report의 길이입니다.
    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        int* answer = (int*)malloc(id_list_len*sizeof(int));

        int tmp[id_list_len][id_list_len];
        for(int i = 0; i<id_list_len; ++i)
        {
            for(int j =  0; j<id_list_len; ++j)
            {
                tmp[i][j] = 0;
            }
        }

        for(int i = 0; i<report_len; ++i)
        {
            char* pch;
            pch = strtok (report[i]," ");

            int idx1 = 0;
            for(int j = 0; j<id_list_len; ++j)
            {
                if(strcmp(id_list[j],pch) == 0)
                {
                    idx1 = j;
                }
            }
            pch = strtok(NULL, " ");
            int idx2 = 0;
            for(int j = 0; j<id_list_len; ++j)
            {
                if(strcmp(id_list[j],pch) == 0)
                {
                    idx2 = j;
                }
            }

            tmp[idx1][idx2] += 1;        
        }

        int tmp2[id_list_len];
        for(int i = 0; i<id_list_len; ++i)
        {
            tmp2[i] = 0;
            for(int j =  0; j<id_list_len; ++j)
            {
                if(tmp[j][i] > 0)
                {
                    tmp2[i] += 1;
                }
            }
        }


        for(int i = 0; i<id_list_len; ++i)
        {
            answer[i] = 0;
            for(int j =  0; j<id_list_len; ++j)
            {
                if(tmp[i][j] > 0 && tmp2[j] >= k)
                {
                    answer[i] += 1;
                }
            }
        }

        return answer;
    }
