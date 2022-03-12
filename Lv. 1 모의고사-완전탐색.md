[page](https://programmers.co.kr/learn/courses/30/lessons/42840)

    def solution(answers):
        fuckingmath_1=[1,2,3,4,5]*2000 #1,2,3,4,5 반복 #10000문제에 대한 수포자의 답안을 리스트로 만들기
        fuckingmath_2=[2,1,2,3,2,4,2,5]*1250 #2,1 / 2,3 / 2,4 / 2,5 반복 
        fuckingmath_3=[3,3,1,1,2,2,4,4,5,5]*1000 #3,3 / 1,1 / 2,2 / 4,4 / 5,5 반복
        count_1,count_2,count_3=0,0,0

        for i in range(len(answers)): #실제 답안에 따른 수포자 3명의 점수 채점
            if answers[i]==fuckingmath_1[i]:
                count_1+=1
            if answers[i]==fuckingmath_2[i]:
                count_2+=1
            if answers[i]==fuckingmath_3[i]:
                count_3+=1

        score=[[1,count_1],[2,count_2],[3,count_3]] #등수를 출력하는것이 아닌 최다 득점자 출력(최다 득점자의 점수를 max로 출력 후 차례로 최다 득점자의 점수와 비교해 같을경우 winner에 추가)
        winner_score=max(count_1,count_2,count_3)
        winner=[]

        for i in range(len(score)):
            if winner_score==score[i][1]:
                winner.append(score[i][0])

        answer = winner

        return answer
