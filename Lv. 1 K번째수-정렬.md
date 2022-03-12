[page](https://programmers.co.kr/learn/courses/30/lessons/42748)

    def solution(array, commands):

        result=[]
        for i in commands:
            data=array[i[0]-1:i[1]]
            data.sort()
            result.append(data[i[2]-1])

        answer = result

        return answer
