//calculate sum of digits of a given no.
#include<stdio.h>
int main(){
    int n,sum=0,d;
    printf("enter a no.");
    scanf("%d",&n);
   for(;n!=0;n/=10){
    d=n%10;
    sum+=d;
   }
    printf("Sum of digits of given no. is %d",sum);
    return 0;

}