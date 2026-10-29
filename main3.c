//202610302216
//师英杰

#include <stdio.h>
int main()
{
    float a;
    float b;
    float c;

    printf("请分别输入三角形的三条边\n");

    scanf("%f %f %f", &a,&b,&c);

    if(a+b>c && a+c>b && b+c>a){
    printf("能构成三角形\n");
    } else {
    printf("不能构成三角形\n");
    }

    return 0;
}