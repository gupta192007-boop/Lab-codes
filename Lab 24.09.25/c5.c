//Print even no.s btw 1 to 50
#include<stdio.h>
int main(){
    printf("Even no. btw 1 to 50 are:\n");
    for(int i=1;i<50;i++){
        if(i%2==0){
            printf("%d ",i);
        }
    }
    return 0;
}