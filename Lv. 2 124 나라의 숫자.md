[page](https://programmers.co.kr/learn/courses/30/lessons/12899)

    def solution(n):

        answer=''
        while n:
            if n%3!=0: #n이 3의 배수가 아니라면 3진법을 구하는 것과 동일
                answer+=str(n%3)
                n//=3
            else:
                answer+='4' #n이 3으로 나눠지면 무조건 4추가, n을 3으로 나눈 몫에서 1을 뺀값을 저장
                n=n//3-1

        answer=answer[::-1] #일의자리부터 구하고 뒤로 값을 붙였으니까 답은 거꾸로 
        return answer
