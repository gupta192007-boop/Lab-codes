//coding 1:
#include <stdio.h>
int main(){
int a,b,c;
    printf("enter side a");
    scanf("%d",&a);
    printf("enter side b");
    scanf("%d",&b);
    printf("enter side c");
    scanf("%d",&c);
    if (a+b>c && b+c>a && a+c>b){
        if (a==b && b==c){
            printf("Triangle is equilateral");
        }
        else if (a==b||b==c||c==a){
            printf("triangle is isosceles");
        }
        else if (a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b){
            printf("triangle is right");
        }
        else{
            printf("triangle is scalene");
        }
    }
    else{
        printf("not triangle");
    }

    return 0;
}