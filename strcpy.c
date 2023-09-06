#include <stdio.h>
char* strcpy_(const char* arr,char* dest)
	{
    int size_of_dest = sizeof(dest);
		while(*arr != '\0'&& size_of_dest-- >1)
		{
			*dest++ = *arr++;
		}	
		*dest = '\0';//ավելացնում է տողի վերջում
        return 0;
	}
int main()
    {
		char arr1[20]="hello";
		char destination[1];
    strcpy_(arr1,destination);
	printf("%s",destination);
	   return 0;
	}






