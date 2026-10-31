//202610302216
//师英杰

#include<stdio.h>
int main()
{
    float a;
    float b;
    char op;

    scanf("%f %c %f", &a, &op, &b);

    if(op == '+'){
        printf("%f\n",a + b );

    }else if(op == '-'){
    printf("%f\n", a - b );

    }else if(op == '*'){
        printf("%f\n", a * b );

    }else if(op == '/'){
        if (b == 0){
            printf("输入无效");
        }
        else {
            printf("%f\n", a / b );
        }
    }else {
        printf("错误，不支持的运算符号");
    }

    return 0;
}
