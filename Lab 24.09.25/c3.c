//Table of no. entered by user
#include <stdio.h>
int main(){
    int n,p;
    printf("enter a no.");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        p=n*i;
        printf("%d * %d is %d\n",n,i,p);
    }
    return 0;
}