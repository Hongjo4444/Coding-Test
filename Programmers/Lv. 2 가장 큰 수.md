[page](https://programmers.co.kr/learn/courses/30/lessons/42746?language=cpp#)

c++

    #include <algorithm>
    #include <string>
    #include <vector>
    #include <iostream>

    using namespace std;

    bool compare(string a, string b)
    {
        if (b + a < a + b)
            return true;
        return false;
    }

    string solution(vector<int> numbers)
    {
        string answer = "";

        vector<string> strings;

        for (int i=0;i<numbers.size();i++)
        {
            strings.push_back(to_string(numbers[i]));
        }

        sort(strings.begin(), strings.end(), compare); //compare 함수 아이디어! 앞뒤 합친거 비교해서 큰거 앞으로

        for (int i =0; i < strings.size(); i++)
        {
            answer += strings[i];
        }

        if (answer[0] == '0') //첫 숫자가 0인건 다른것들도 0이라는말
            answer = "0";

        // cout << answer;
        return answer;
    }
