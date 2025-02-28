#include<stdio.h>

int main(){
    double data1,data2;
    char op;
    printf("type in an expression:");
    scanf("%lf%c%lf",&data1,&op,&data2);
    switch (op)
    {
    case '+':
        printf("data1+data2=%.2f",data1+data2);
        break;
    case '-':
        printf("data1-data2=%.2f",data1-data2);
        break;
    case '*':
        printf("data1*data2=%.2f",data1*data2);
        break;
    case '/':
        if(data2=!0){
            printf("data1/data2=%.2f",data1/data2);
        }
        else{
            printf("error!\n");
        }
        break;
    
    default:
            printf("op not be defined");
        break;
    }
    return 0;
}