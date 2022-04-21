[page](https://programmers.co.kr/learn/courses/30/lessons/12977)

    def solution(nums):

        from itertools import combinations
        data=list(combinations(nums,3))

        count=0
        for i in data:
            sum_data=sum(i)
            bull=True
            for j in range(2,sum_data):
                if sum_data%j==0:
                    bull=False
                    break
            if bull==True:
                count+=1

        answer=count
        return answer

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    // nums_len은 배열 nums의 길이입니다.
    int solution(int nums[], size_t nums_len)
    {
        int check_num;
        int count=0;
        for(int i=0;i<nums_len;i++)
        {
            for(int j=i+1;j<nums_len;j++)
            {
                for(int k=j+1;k<nums_len;k++)
                {
                    check_num=nums[i]+nums[j]+nums[k];
                    bool check=true;
                    for(int l=2;l<check_num;l++)
                    {
                        if(check_num%l==0)
                        {
                            check=false;
                            break;
                        }
                    }
                    if(check==true) count+=1;
                }
            }
        }
        int answer = count;

        return answer;
    }
