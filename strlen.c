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
int main()
{
char arr1[]="hello";
int len = strlen_(arr1);
	printf("%d",len);
	return 0;
}
