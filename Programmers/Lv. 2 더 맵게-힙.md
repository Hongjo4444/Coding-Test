[page](https://programmers.co.kr/learn/courses/30/lessons/42626)

    def solution(scoville, K):

        import heapq

        heapq.heapify(scoville) #heapq.heapify()로 주어진 scoville을 힙 자료구조로 만든다.
        count=0

        while scoville[0]<K: #정의된 새로운 음식의 스코빌 지수 계산법대로 heapq.heappush(), heapq.heappop()을 이용해 코드를 작성하고, 음식을 섞을때마다 count한다.
        #heapq(heapify, heappush, heappop)를 쓰는것 만으로도 힙 자료구조가 된다. 힙 자료구조는 기본적으로 최소힙이다.
            if len(scoville)==1:
                count=-1
                break
            heapq.heappush(scoville,heapq.heappop(scoville)+2*heapq.heappop(scoville))
            count+=1

        answer = count

        return answer
