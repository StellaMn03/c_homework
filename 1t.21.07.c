#include <stdio.h>

int main(){
	int ages[5];
	int index=0;
	while(index<5){
	scanf("%d",&ages[index]);
	index++;
	}
	for(int i=0;i<sizeof(ages)/sizeof(ages[0]);i++){
		printf(" %d ",ages[i]);
	}
return 0;

}

