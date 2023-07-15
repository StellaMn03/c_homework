#include <stdio.h>//3-րդ խնդիր տանը
int main(){
int a=0;
int n=5;//5th bit
printf("Enter an integer`");
scanf("%d",&a);
int fifth_bit=(a>>n)&1;// right shift n times,and bitwise AND with 1`(00000001)
 if (fifth_bit==0)
{
	fifth_bit=1;
printf("replaced fifth bit to 1\n");
}
else
	printf("%d\n",a);	 
return 0;

}
