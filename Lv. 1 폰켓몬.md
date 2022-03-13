[page](https://programmers.co.kr/learn/courses/30/lessons/1845)

    def solution(nums):

        nums.sort()
        result=[]
        for i in range(0,len(nums)):
            if i==0:
                result.append(nums[i])
                if len(result)==len(nums)/2:
                    break
            elif nums[i]==result[-1]:
                continue
            else:
                result.append(nums[i])
                if len(result)==len(nums)/2:
                    break

        answer=len(result)
        return answer
