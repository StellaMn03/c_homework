#include <stdio.h>//3-րդ խնդիր դասին
int main(){
int num=0;
int tmp;
scanf("%d",&num);
if(num<=12)
{
	return 0;
}
else

		while(num!=0){
 tmp+=num%10;
    num=num/10;
}	
printf("%d", tmp + num);
return 0;
}
