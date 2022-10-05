[page](https://programmers.co.kr/learn/courses/30/lessons/72411)

    def solution(orders, course):

        from collections import defaultdict
        from itertools import combinations

        order_element=[]
        for i in orders:
            element=[]
            for j in range(len(i)):
                element.append(i[j])
            order_element.append(element)

        data=defaultdict(int)
        for k in course:
            for l in order_element:
                combi=list(combinations(l,k))
                for m in range(len(combi)):
                    combi[m]=tuple(sorted(combi[m]))
                if len(combi)!=0:
                    for m in combi:
                        data[m]+=1

        result=[[] for _ in range(len(course))]
        for o in data.items():
            for n in range(len(course)):
                if len(o[0])==course[n] and o[1]>=2:
                    result[n].append(o)

        for p in range(len(result)):
            result[p]=sorted(result[p],key=lambda x:x[1],reverse=True)

        answer=[]
        for q in result:
            for r in range(len(q)):
                if r==0:
                    answer.append(''.join(q[r][0]))
                else:
                    if q[r][1]==q[r-1][1]:
                        answer.append(''.join(q[r][0]))
                    else:
                        break
        answer.sort()

        return answer
