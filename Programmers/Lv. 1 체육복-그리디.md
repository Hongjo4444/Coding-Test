[page](https://programmers.co.kr/learn/courses/30/lessons/42862)

    def solution(n, lost, reserve):

        lost.sort()
        reserve.sort()
        a=n-len(lost) #체육수업을 들을수 있는 학생(a) = 전체 학생 수(n) - 옷을 안가져온 학생 수(lost) 셋팅

        for i in range(len(lost)):
            for j in range(len(reserve)):
                if lost[i]==reserve[j]: #본인이 옷을 잃어버린 경우, 본인이 입으므로(제한사항) 잃어버린사람=여분의 옷이 있는사람인 경우 카운트(찾은 경우 해당 자리의 수는 -50(다음 for문에서 중복체크가 되지 않는 임의의 값)으로 지정)
                    a+=1
                    lost[i]=-50
                    reserve[j]=-50
        for i in range(len(lost)):
            for j in range(len(reserve)):
                if abs(lost[i]-reserve[j])==1: #잃어버린사람과 여분의 옷이 있는 사람의 차이는 1이여야 하므로 절댓값함수(abs)를 이용하여 카운트(마찬가지로, 찾은 경우 해당 자리의 수는 -50(다음 for문에서 중복체크가 되지 않는 임의의 값)으로 지정)
                    a+=1
                    lost[i]=-50
                    reserve[j]=-50

        return a
