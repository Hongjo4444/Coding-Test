[page](https://programmers.co.kr/learn/courses/30/lessons/12969)

c

    #include <stdio.h>

    int main(void) {
        int a;
        int b;
        scanf("%d %d", &a, &b);
        for(int i=0;i<b;i++)
        {
            for(int j=0;j<a;j++)
            {
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }
