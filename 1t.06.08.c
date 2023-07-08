#include <stdio.h>
int main(){
char sym;
scanf("%c",&sym);
char arr[]={'a','e','o','u','i'};
int count=0;
	for (int i=0;i<5;i++){
	if(sym==arr[i]){
printf("The symbol is consonant");
return 0;
}
   count++;
   if(count>=5){
	   if( sym>=65 && sym <=90 || sym>=97 && sym<=122)
	   printf("The symbol is vowel");
}
   
}	
	return 0;
}
