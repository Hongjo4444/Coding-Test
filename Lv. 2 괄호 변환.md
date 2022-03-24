[page](https://programmers.co.kr/learn/courses/30/lessons/60058)

    def solution(p):
        answer=''
        if len(p)==0:
            return p
        if check(p)==True: #올바른 문자열인지 확인
            return p
        u=seperate(p)[0] #균형잡힌 문자열 u,v로 나누기(u입력(함수 실행 결과 첫번째 값),v입력(함수 실행 결과 두번째 값))
        v=seperate(p)[1]
        if check(u)==True: #u가 올바른 문자열이라면 u에 대해 처음부터 실행
            return u+solution(v)
        if check(u)==False: #u가 올바른 문자열이 아니라면
            answer+='('
            answer+=solution(v)
            answer+=')'
            u=u[1:-1]
            for i in reverse(u):
                answer+=i
            return answer

    def check(p):
        x=y=0
        for i in range(len(p)):
            if p[i]=='(':
                x+=1
            elif p[i]==')':
                y+=1
            if x<y: #올바른 문자열인지>>'('가 ')'보다 작아지면 이미 무조건 올바르지 않은 것
                return False
        return True

    def seperate(p):
        x=y=0
        num=0
        u=v=''
        while True:
            if p[num]=='(':
                x+=1
            elif p[num]==')':
                y+=1
            num+=1
            if x==y: #u가 균형잡힌 문자열인지 판단>>'('수==')'인지
                for i in range(num):
                    u+=p[i]
                for j in range(num,len(p)):
                    v+=p[j]
                break
        return u,v

    def reverse(string):
        r={'(':')',')':'('}
        return [r[s] for s in string]
