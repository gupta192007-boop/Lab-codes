//Sum of first 50 natural no.s
#include <stdio.h>
int main(){
    int n=50,sum=0;
    for(int i=1;i<=50;i++){
        sum+=i;
    }
    printf("Sum of first 50 natural no. is: %d",sum);
    return 0;
}