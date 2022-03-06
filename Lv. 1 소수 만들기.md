[page](https://programmers.co.kr/learn/courses/30/lessons/12977)

    def solution(nums):

        from itertools import combinations
        data=list(combinations(nums,3))

        count=0
        for i in data:
            sum_data=sum(i)
            bull=True
            for j in range(2,sum_data):
                if sum_data%j==0:
                    bull=False
                    break
            if bull==True:
                count+=1

        answer=count
        return answer
