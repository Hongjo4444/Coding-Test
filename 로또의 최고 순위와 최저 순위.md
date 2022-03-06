[page](https://programmers.co.kr/learn/courses/30/lessons/77484)

    def solution(new_id):    

        ok=['-','_','.']
        ng=['~','!','@','#','$','%','^','&','*','(',')','=','+','[','{',']','}',':','?',',','<','>','/']

        new_id=new_id.lower()

        result=[]
        for i in new_id:
            if i not in ng:
                result.append(i)
        new_id=result
        result=[]

        for j in range(len(new_id)):
            if j>0 and new_id[j]=='.' and new_id[j-1]=='.':
                continue
            else:
                result.append(new_id[j])

        if len(result)>=1 and result[0]=='.':
            del result[0]
        if len(result)>=1 and result[-1]=='.':
            del result[-1]

        if len(result)==0:
            result.append('a')

        if len(result)>15:
            result=result[:15]
        if len(result)>=1 and result[-1]=='.':
            del result[-1]

        while len(result)<=2:
            result.append(result[-1])

        result=''.join(result)

        answer = result
        return answer
