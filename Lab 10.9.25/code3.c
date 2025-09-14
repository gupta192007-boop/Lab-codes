//Coding 3:
#include <stdio.h>
int main() {
int l1,l2,l3,b1,b2,b3,p1,p2,p3;
printf("enter l1");
scanf("%d",&l1);
printf("enter l2");
scanf("%d",&l2);
printf("enter l3");
scanf("%d",&l3);
printf("enter b1");
scanf("%d",&b1);
printf("enter b2");
scanf("%d",&b2);
printf("enter b3");
scanf("%d",&b3);
p1=2*(l1+b1);
p2=2*(l2+b2);
p3=2*(l3+b3);
(p1 > p2 && p1 > p3) ? printf("Perimeter 1 is the greatest: %d\n", p1) :
    (p2 >p3) ? printf("Perimeter 2 is the greatest: %d\n", p2) :
    printf("Perimeter 3 is the greatest: %d\n", p3); 
return 0;
}