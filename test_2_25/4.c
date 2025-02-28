#include<stdio.h>

int main(){
    int k;
    int count=0;
    for(k=3;k<=50;k++){
        if(k%3==0||k%5==0){
           printf("%d\n",k);
           count++;
        }
    }
    printf("count=%d",count);
    return 0;
}