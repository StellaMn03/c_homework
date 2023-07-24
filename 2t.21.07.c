#include <stdio.h>
#include <string.h>
int main(){
char  arr[8];
int index=0;
int count=0;
while(index<8){
	scanf("%c",&arr[index]);
	index++;
}
for(int i=0;i<strlen(arr);i++){
if(arr[i]>=48 &&arr[i]<=57){
	count++;
    printf("%c",arr[i]);
	}
}
if(count==0)
	printf("There is no number");
return 0;
}
