#include <stdio.h>
int strlen_(const char* arr)
    {
		int size=0;
		for(int i=0;arr[i]!='\0';i++)
    	{
			size++;
		}
		return size;
	}	
const char* strcat_( char* dest, char * arr)
	{
		int len = strlen_(dest);
		char * ptr = dest +len; 
		while(*arr != '\0')
		{
			*ptr++ = *arr++;
		}
		*ptr = '\0';
	return dest;	
	}
int main()
	{
		char destination[30]="Hello ";
		char arr1[12]="World!";
		strcat_(destination,arr1);
		printf("%s",destination);
		return 0;
	}	
