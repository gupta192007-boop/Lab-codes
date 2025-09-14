//Coding 4:
#include <stdio.h>

int main() {
unsigned int x1,x2,x3,y1,y2,y3,a;
a= 0.5*(x1*(y2-y3)+ x2*(y3-y1)+ x3*(y1-y2));
printf("enter x1");
scanf("%d",&x1);
printf("enter x2");
scanf("%d",&x2);
printf("enter x3");
scanf("%d",&x3);
printf("enter y1");
scanf("%d",&y1);
printf("enter y2");
scanf("%d",&y2);
printf("enter y3");
scanf("%d",&y3);
if (a==0){
    printf("points are collinear");
}
else{
    printf("non collinear");
}

    return 0;
}