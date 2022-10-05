[page](https://programmers.co.kr/learn/courses/30/lessons/17677)

    def solution(str1, str2):

        str1_data=[]
        str2_data=[]
        for i in range(len(str1)-1):
            if str1[i].isalpha()==True and str1[i+1].isalpha()==True:
                str1_data.append((str1[i]+str1[i+1]).lower())
        for j in range(len(str2)-1):
            if str2[j].isalpha()==True and str2[j+1].isalpha()==True:
                str2_data.append((str2[j]+str2[j+1]).lower())

        if len(str1_data)==0 and len(str2_data)==0:
            result=65536
        else:
            num_intersection=0
            num_union=0
            intersection=set(str1_data)&set(str2_data)
            union=set(str1_data)|set(str2_data)
            for k in union:
                num_intersection+=min(str1_data.count(k),str2_data.count(k))
                num_union+=max(str1_data.count(k),str2_data.count(k))
            result=int((num_intersection/num_union)*65536)

        answer=result
        return answer
