#include <stdio.h>//3-րդ խ նդիր
int main(){
int num=0;
int count=0;
 scanf("%d",&num);
 if(num==1 || num ==0)
	 printf("the number is neither prime nor composite\n");
	 else
 {
	 for(int i=1;i<=num;i++){
  if(num%i==0)
	  count++;
 }
  if(count==2)
	  printf("The number is prime\n");
  else
	  printf("the number is composite\n");
}
return 0;

}
