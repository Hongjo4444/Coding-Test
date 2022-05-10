[page](https://programmers.co.kr/learn/courses/30/lessons/92334)

python

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
    #include <stdlib.h>
    #include <string.h>
    #include <stdbool.h>

    typedef struct kakao
    {
        char* to[1000];
        int warning;
    } data;

    // id_list_len은 배열 id_list의 길이입니다.
    // report_len은 배열 report의 길이입니다.
    // 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
    int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k)
    {
        // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
        int* answer = (int*)malloc(sizeof(int)*id_list_len);
        // printf("%s %d %s %d %d\n",id_list[0],id_list_len,report[0],report_len,k);

        for(int i=0;i<id_list_len;i++)
        {
            data id_list[i];
        }

        for(int i=0;i<report_len;i++)
        {
            char name[10];
            strcpy(name,report[i]);
            name.warning=1;
        }

        return answer;
        free(answer);
    }

    int main()
    {
        const char* id_list[]={"muzi", "frodo", "apeach", "neo"};
        size_t id_list_len=sizeof(id_list)/sizeof(char*);
        const char* report[]={"muzi frodo","apeach frodo","frodo neo","muzi neo","apeach muzi"};
        size_t report_len=sizeof(report)/sizeof(char*);
        int k=2;

        solution(id_list,id_list_len,report,report_len,k);
        return 0;
    }
