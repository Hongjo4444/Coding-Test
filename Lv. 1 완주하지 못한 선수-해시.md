[page](https://programmers.co.kr/learn/courses/30/lessons/42576)

    def solution(participant, completion):

        data={}

        for v in participant: #participant의 원소를 key 값으로하는 value 0인 해시 생성
            data[v]=0
        for i in participant: #participant의 원소가 나올때마다 value 1씩 더하기(중복된 이름이 있을 수 있으므로)
            data[i]+=1
        for j in completion: #completion의 원소가 나올때마다 value 1씩 빼기
            data[j]-=1
        for k,v in data.items(): #value가 1인 원소(참석했지만 도착하지 못한)의 key값 출력
            if v==1:
                answer=k

        return answer
