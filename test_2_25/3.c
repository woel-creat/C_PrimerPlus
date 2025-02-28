#include<stdio.h>

int main(){
    int a,b,c;
    int max;
    int min;
    int middle;
    printf("请输入三个数：");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            max=a;
            if(b<c){
                min=b;
                middle=c;
            }
            else{
                min=c;
                middle=b;
            }   
        }
        else{
            max=c;
            min=b;
            middle=a;
        }
    }
    else{
        if(b>c){
            max=b;
            if(a<c){
                min=a;
                middle=c;
            }
            else{
                min=c;
                middle=a;
            }
        }
        else{
            max=c;
            min=a;
            middle=b;
        }
    }
    printf("%d<%d<%d",min,middle,max);
    return 0;
}