//202610302216
//师英杰


#include <stdio.h>

int main()
{
    float a;

    printf("请输入一个实数：");

    scanf ("%f", &a);

    if(a == 0) {
        printf("结果为零\n");
    } else if (a < 0 ){
    printf ("负数\n");
    } else {
        printf ("正数\n");
    }

    return 0;
}
