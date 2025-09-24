//Compute a raised to the power b
#include <stdio.h>
int main(){
    int a,b,p=1;
    printf("enter two no.s");
    scanf("%d %d",&a,&b);
    for(int i=1;i<=b;i++){

        p*=a;
    }
    printf("%d raised to the power %d is %d",a,b,p);
    return 0;

}
    
