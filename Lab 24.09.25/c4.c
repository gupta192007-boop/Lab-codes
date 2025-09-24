//Find factorial of a given no.
#include <stdio.h>
int main(){
    int a,p=1;
    printf("enter a no.");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        p*=i;
    }
    printf("Factorial of given no. is %d",p);
    return 0;
}