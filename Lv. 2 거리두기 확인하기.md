[page](https://programmers.co.kr/learn/courses/30/lessons/81302)

    def solution(places):

        def check_manone(row,col):
            for l in range(0,5):
                for m in range(0,5):
                    if i[l][m]=='P' and abs(l-row)+abs(m-col)==1:
                        return False
            return True

        def check_mantwo(row,col):
            #print(2,row,col)
            for l in range(0,5):
                for m in range(0,5):
                    #print(l,m)
                    if i[l][m]=='P' and abs(l-row)+abs(m-col)==2 and abs(l-row)==1 and abs(m-col)==1:
                        if i[row][m]!='X' or i[l][col]!='X':
                            return False
                    if i[l][m]=='P' and abs(l-row)+abs(m-col)==2 and abs(l-row)==2:
                        if i[int(abs(l+row)/2)][col]!='X':
                            return False
                    if i[l][m]=='P' and abs(l-row)+abs(m-col)==2 and abs(m-col)==2:
                        if i[row][int(abs(m+col)/2)]!='X':
                            return False
            return True

        result=[]
        for i in places:
            bul=True
            for j in range(len(i)):
                for k in range(len(i[j])):
                    # print(i[j][k])
                    if i[j][k]=='P':
                        bul=check_manone(j,k)
                        if bul==False:
                            break
                        bul=check_mantwo(j,k)
                        if bul==False:
                            break
                if bul==False:
                    break
            if bul==True:
                result.append(1)
            if bul==False:
                result.append(0)
            # print('--------------------------------------')

        answer=result
        return answer
