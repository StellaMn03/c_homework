#include <stdio.h>//2֊րդ խ նդիր
int main(){ 
   char sym;
 
   do {
	   scanf("%c",&sym);
    if (sym>= 65 && sym <=90){
	printf("%c\n",sym+32);
	}
	else
	{
        printf("Enter uppercase symbol\n");
		
	 } 
	 }while(sym<65 || sym >90);
		return 0;	  
}
