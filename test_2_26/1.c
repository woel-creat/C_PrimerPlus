#include<stdio.h>
void function();

int main(){
    int a1[]={2,9,8,9,23};
    int a2[]={7,8,90,7,6};
    int a3[5];
    int size=5;
    function(a1,a2,a3,size);
    for(int i=0;i<size;i++){
        printf("%d\n",a3[i]);
    }
    return 0;
}

void function(int a1[],int a2[],int a3[],int size){
      for(int i=0;i<size;i++){
        a3[i]=a1[i]+a2[i];
      }
}