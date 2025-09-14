//Coding 2:
#include <stdio.h>
int main() {
float w,h,bmi;
   printf("enter weight in kg");
   scanf("%f",&w);
   printf("enter height in m");
   scanf("%f",&h);
   bmi=w/(h*h);
   if (bmi<15){
       printf("Starvation");
   }
   else if(bmi>15.1 && bmi<17.5){
       printf("Anorexic");
   }
   else if(bmi>17.6&& bmi<18.5){
       printf("underweight");
   }
   else if (bmi>18.6 && bmi<24.9){
       printf("ideal");
   }
   else if (bmi>25 && bmi<25.9){
       printf("over");
   }
   else if (bmi>30 && bmi<39.9){
       printf("obese");
   }
   else{
       printf("morbidity obese");
   }
return 0;
}