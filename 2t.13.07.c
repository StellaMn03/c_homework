#include <stdio.h>//2-րդ խնդիր տանը
int main(){
int num1,num2,num3=0;
int gcd=0;//greatest common divisor
printf("Enter 3 integers` ");
scanf("%d %d %d",&num1,&num2,&num3);
 
 for(int i=1;i<=num1 && i <= num2 && i <=num3 ;i++){
if(num1%i==0 && num2%i==0 && num3%i==0)
	gcd=i;
 }
 printf("The greatest common divisor is` %d \n",gcd);
 return 0;
}
