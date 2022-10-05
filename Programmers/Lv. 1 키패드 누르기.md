[page](https://programmers.co.kr/learn/courses/30/lessons/67256)

    def solution(numbers, hand):

        from collections import defaultdict
        num_point=defaultdict(list)
        num_point[0]=[0,0]
        num_point[1]=[-1,3]
        num_point[2]=[0,3]
        num_point[3]=[1,3]
        num_point[4]=[-1,2]
        num_point[5]=[0,2]
        num_point[6]=[1,2]
        num_point[7]=[-1,1]
        num_point[8]=[0,1]
        num_point[9]=[1,1]

        now_l=[-1,0]
        now_r=[1,0]
        result=[]
        for i in numbers:
            if i==1 or i==4 or i==7:
                result.append('L')
                now_l=num_point[i]
            elif i==3 or i==6 or i==9:
                result.append('R')
                now_r=num_point[i]
            else:
                if sum(map(abs,[x-y for x,y in zip(now_l,num_point[i])]))<sum(map(abs,[x-y for x,y in zip(now_r,num_point[i])])):
                    result.append('L')
                    now_l=num_point[i]
                elif sum(map(abs,[x-y for x,y in zip(now_l,num_point[i])]))>sum(map(abs,[x-y for x,y in zip(now_r,num_point[i])])):
                    result.append('R')
                    now_r=num_point[i]
                else:
                    if hand=='left':
                        result.append('L')
                        now_l=num_point[i]
                    else:
                        result.append('R')
                        now_r=num_point[i]

        answer = ''.join(result)
        return answer
