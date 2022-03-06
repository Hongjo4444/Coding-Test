[page](https://programmers.co.kr/learn/courses/30/lessons/86051)

    def solution(numbers):

        data=list(range(0,10))

        for i in numbers:
            if i in data:
                data.remove(i)

        result=sum(data)

        answer = result
        return answer
