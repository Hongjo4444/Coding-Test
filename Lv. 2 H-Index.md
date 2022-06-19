[page](https://programmers.co.kr/learn/courses/30/lessons/42747?language=cpp)

c++

    #include <algorithm>
    #include <string>
    #include <vector>
    #include <iostream>

    using namespace std;

    int solution(vector<int> citations)
    {
        int answer = 0;
        sort(citations.begin(),citations.end(),greater<int>());

        for(int i=citations[0];i>=0;i--)
        {
            // cout << citations[i];
            int up=0;
            int schlor=i;
            for(int j=0;j<citations.size();j++)
            {
                if(citations[j]>=schlor)
                {
                    up+=1;
                }
            }
            if(up>=schlor)
            {
                answer=schlor;
                break;
            }
        }
        // cout << answer;

        return answer;
    }
