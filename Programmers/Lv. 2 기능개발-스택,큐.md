[page](https://programmers.co.kr/learn/courses/30/lessons/42586)

    def solution(progresses, speeds):

        from collections import deque

        progresses=deque(progresses)
        speeds=deque(speeds)

        result=[]

        while progresses: #'success'의 원소 초기화(한번에 몇 개씩 완성되는지 알아야하므로) 후 과정 반복
            success = []
            progresses=deque([x+y for x,y in zip(progresses,speeds)]) #'zip'을 이용해 'progresses'의 작업량 누적 갱신
            if progresses[0]>=100:
                while progresses[0]>=100: #가장 앞 원소가 100% 이상이면 'success'에 추가 후, 'progresses', 'speed'에서는 popleft로 빼내는 과정 반복
                    success.append(progresses[0])
                    progresses.popleft()
                    speeds.popleft()
                    if len(progresses)==0: #queue에 아무 스택이 없는경우 비교 불가하므로 확인해줘야함
                        break
                result.append(len(success)) #'success'의 원소 수를 'result'에 기록

        answer = result

        return answer
