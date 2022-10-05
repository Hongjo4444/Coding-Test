[page](https://programmers.co.kr/learn/courses/30/lessons/42889#)

    def solution(N, stages):

        from collections import defaultdict

        data=defaultdict(int)
        for i in range(1,N+1):
            tring=count=fail=0
            for j in stages:
                if j>=i:
                    tring+=1
                if j==i:
                    count+=1    
            if tring==0:
                fail=0
            else:
                fail=count/tring
            data[i]=fail

        data=sorted(data.items(),key=lambda x:(x[1],-x[0]),reverse=True)

        result=[]
        for k in data:
            result.append(k[0])

        answer=result
        return answer
