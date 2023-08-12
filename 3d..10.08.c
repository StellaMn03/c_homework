#include <stdio.h>
int main(){
char arr[]="Hello World!";
int count=0;
int j=0;
for(int i=0;i<sizeof(arr);i++)
{
	if(arr[i]!=' ')
		count++;
}
char arr2[count];
for(int i=0;i<sizeof(arr);i++){
	if(arr[i]!=' ')
	{
		arr2[j]==arr[i];
		j++;
    }
}
for(int i=0;i<sizeof(arr2);i++)
{
	printf("%c",arr2[i]);
}
return 0;
}
