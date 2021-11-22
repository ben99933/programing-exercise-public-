#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main(){

    printf("Enter an expression: ");
    //題目在搞我阿....
    //我以為要先乘除後加減ㄟ
    //浪費我時間T_T
    float f1,f2;
    float result;
    scanf("%f", &f1);
    result = f1;
    char c;
    int input_check = scanf("%c", &c);//檢查是否為EOF
    while(input_check != EOF && c != '\n'){
        scanf("%f",&f2);
        if(c == '+'){
            result += f2;
        }else if(c == '-'){
            result -= f2;
        }
        else if(c == '*'){
            result *= f2;
        }
        else if(c == '/'){
            result /= f2;
        }
        input_check = scanf("%c", &c);
    }
    printf("%.2f", result);
    return 0;
}