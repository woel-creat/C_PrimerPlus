#include<stdio.h>
void founction();
int main(){
    int a1[]={1,3,5,7,8};
    int a2[]={2,3,4,5,8};
    int a3[5];
    int size=5;
    founction(a1,a2,a3,size);
    for(int i=0;i<size;i++){
        printf("%d\n",a3[i]);
    }
    return 0;
}

void founction(int a1[],int a2[],int a3[],int size){
    int i=0;
    int j=size-1;
    for(i=0;i<size;i++){
        a3[i]=a1[i]*a1[i]+a2[j]*a2[j];
        j--;
    }
}