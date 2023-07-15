#include <stdio.h>//1֊ին խնդիր տանը
int main(){
int year=0;
printf("Enter the year` ");
scanf("%d",&year);
if(year%4==0 && (year%400==0||year%100!=0))
	printf("The year is leap\n");
else
	printf("The year isn`t leap\n");
	return 0;

}
