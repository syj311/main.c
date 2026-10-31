//202610302216
//师英杰


#include <stdio.h>

int main()
{
    float score;

    printf("请输入成绩\n");

    scanf("%f", &score);

    if(score < 0 || score > 100){
        printf("输入无效\n");
    }else if(score >= 90){
        printf("A\n");
    }else if(score >= 80){
        printf("B\n");
    }else if(score >= 70){
        printf("C\n");
    }else if(score >= 60){
        printf("D\n");
    }else if(score >= 0){
        printf("E\n");
    }

    return 0;
}
