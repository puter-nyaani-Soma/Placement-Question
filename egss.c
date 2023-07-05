#include <stdio.h>
int main(){
    int i=0;
    while(1){
        if(i%2==1&&i%3==1&&i%4==1&&i%5==1&&i%6==1&&i%7==0){
            printf("%d",i);
            break;
        }
            i++;

    }
}