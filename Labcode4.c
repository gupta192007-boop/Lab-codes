#include <stdio.h>
int main (){
    //PROGRAM TO TAKE TWO NUMBERS AS INPUT AND ADD THEM AND STORE THEM IN THIRD VARIABLE.
    int a;
    int b;
    printf("Enter first number :\n");
    scanf("%d" ,&a);
    printf("Enter second number :\n");
    scanf("%d" ,&b);
    int c= a + b;
    printf("The sum of the two numbers is : %d",c);
    return 0;
}