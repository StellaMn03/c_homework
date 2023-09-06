#include <stdio.h>
char * strchr_( const char * str, int sym)
      {
int i = 0;
 while ((str[i] != '\0') && (str[i] != sym))
	{	
		  i++;
	}
   if( sym == str[i] )
		 return (char *)str[i]; 
   else
    	 return NULL;
      }
int main(){
char string[]="Hello World";
char ch='o';
char* ch2 =  strchr_(string,ch);
 printf("%s", ch2);
  return 0;

}

