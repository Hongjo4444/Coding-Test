[page](https://programmers.co.kr/learn/courses/30/lessons/42748)

    def solution(array, commands):

        result=[]
        for i in commands:
            data=array[i[0]-1:i[1]]
            data.sort()
            result.append(data[i[2]-1])

        answer = result

        return answer

c++

    #include <string>
    #include <vector>
    #include <iostream>
    #include <algorithm>

    using namespace std;

    vector<int> solution(vector<int> array, vector<vector<int>> commands)
    {
        vector<int> answer;
        for(int i=0;i<commands.size();i++)
        {
            vector<int> slice={array.begin()+commands[i][0]-1,array.begin()+commands[i][1]};
            // for(int i=0;i<slice.size();i++)
            // {
            //     cout << slice[i] << " ";
            // }
            // cout << endl;
            sort(slice.begin(),slice.end());
            // for(int i=0;i<slice.size();i++)
            // {
            //     cout << slice[i] << " ";
            // }
            cout << endl;
            answer.push_back(slice[commands[i][2]-1]);
            // for(int i=0;i<answer.size();i++)
            // {
            //     cout << answer[i] << " ";
            // }
            cout << endl;
        }

        return answer;
    }
