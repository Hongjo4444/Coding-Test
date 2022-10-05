[page](https://programmers.co.kr/learn/courses/30/lessons/43165)

    def solution(numbers, target):

        count=0
        start=[0] #초기값(0)이 들어있는 'start'를 만든다.
        data=[]

        for i in numbers:
            for j in start:
                data.append(j+i) #'start' 안의 각각의 값에 'number'의 값을 더하고, 빼서 그 값을 'data'에 저장한다.
                data.append(j-i)
                start=data #'start'를 'data'로 재정의한다.
            data=[]

        for i in start:
            if i==target: #'start'안의 모든 값에 대해 target 값과 같을경우 count 해준다.(계산의 마지막 값에 대해서만 비교하는 코드가 된다.(중간 값에서 비교하려면 계산하는 2단계 코드에서 비교한다.))
                count+=1

        answer = count
        return answer
