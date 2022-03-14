[page](https://programmers.co.kr/learn/courses/30/lessons/77485)

    def solution(rows, columns, queries):
        data=[]
        for _ in range(rows):
            if len(data)==0:
                data.append(list(range(1,columns+1)))
            else:
                data.append(list(range(data[-1][-1]+1,data[-1][-1]+1+columns)))

        result=[]
        from collections import deque
        for i in queries:
            minimum=int(1e7)
            before=int(1e7)
            for j in range(i[1]-1,i[3]-1):
                if data[i[0]-1][j]<=minimum:
                    minimum=data[i[0]-1][j]
                before_num=data[i[0]-1][j]
                data[i[0]-1][j]=before
                before=before_num
            for k in range(i[0]-1,i[2]-1):
                if data[k][i[3]-1]<=minimum:
                    minimum=data[k][i[3]-1]
                before_num=data[k][i[3]-1]
                data[k][i[3]-1]=before
                before=before_num
            for m in range(i[3]-1,i[1]-1,-1):
                if data[i[2]-1][m]<=minimum:
                    minimum=data[i[2]-1][m]
                before_num=data[i[2]-1][m]
                data[i[2]-1][m]=before
                before=before_num
            for n in range(i[2]-1,i[0]-1,-1):
                if data[n][i[1]-1]<=minimum:
                    minimum=data[n][i[1]-1]
                before_num=data[n][i[1]-1]
                data[n][i[1]-1]=before
                before=before_num
            data[i[0]-1][i[1]-1]=before
            result.append(minimum)

        answer=result
        return answer
