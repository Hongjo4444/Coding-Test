[page](https://programmers.co.kr/learn/courses/30/lessons/64061)

    def solution(board, moves):

        data=[[] for _ in range(len(board))]
        for i in board:
            for j in range(len(board)):
                data[j].append(i[j])

        count=0
        result=[]
        for k in moves:
            for l in range(len(data[k-1])):
                if data[k-1][-1]==0:
                    break
                elif data[k-1][l]!=0 and len(result)==0:
                    result.append(data[k-1][l])
                    data[k-1][l]=0
                    break
                elif data[k-1][l]!=0 and data[k-1][l]!=result[-1]:
                    result.append(data[k-1][l])
                    data[k-1][l]=0
                    break
                elif data[k-1][l]!=0 and data[k-1][l]==result[-1]:
                    result.pop()
                    count+=2
                    data[k-1][l]=0
                    break

        answer = count
        return answer
