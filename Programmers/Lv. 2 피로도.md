[page](https://programmers.co.kr/learn/courses/30/lessons/87946?language=cpp)

c

    #include <stdio.h>
    #include <stdbool.h>
    #include <stdlib.h>

    int visit[8]={0};
    int answer = 0;


    int clear(int k, int** dungeons,int dungeons_rows,int* visit,int count)
    {
        if(answer < count)
        {
            answer = count;
        }
        for(int i=0;i<dungeons_rows;i++)
        {
            if(k >= dungeons[i][0] && visit[i] == 0)
            {
                visit[i] = 1;
                // printf("들어감?\n");
                clear(k-dungeons[i][1],dungeons,dungeons_rows,visit,count+1);
                visit[i] = 0;
            }
        }
    }

    // dungeons_rows는 2차원 배열 dungeons의 행 길이, dungeons_cols는 2차원 배열 dungeons의 열 길이입니다.
    int solution(int k, int dungeons, size_t dungeons_rows, size_t dungeons_cols) 
    {
        clear(k,dungeons,dungeons_rows,visit,0);

        return answer;
    }
    
c++

    #include <iostream>
    #include <string>
    #include <vector>

    using namespace std;

    int answer=0;
    int n;
    int visited[8];
    vector<vector<int>> dungeons;

    void dfs(int h,int p)
    {
        if(answer<h) answer=h;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==1 || dungeons[i][0]>p) continue;
            visited[i]=1;
            dfs(h+1,p-dungeons[i][1]);
            visited[i]=0;
        }
    }

    int solution(int k, vector<vector<int>> dungeons_origin)
    {
        dungeons=dungeons_origin;
        n=dungeons.size();
        dfs(0,k);
        cout << answer;
        return answer;
    }
