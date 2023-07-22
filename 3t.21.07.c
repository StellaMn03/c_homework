#include <stdio.h>
int main(){
char arr[6];
int index=0;
while(index<6){
	scanf(" %c",&arr[index]);
	index++;
}
for(int i=sizeof(arr)-1;i>=0;i--){
	printf(" %c",arr[i]);
}
return 0;
}
