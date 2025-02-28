#include<stdio.h>

int main(){
         int a;
         int b;
         for(a=6;a<=50;a++){
            for(b=10;b<=30;b++){
                if(a*3+b*2==120){
                    printf("(%d,%d)\n",a,b);
                }
            }
         }
    return 0;
}