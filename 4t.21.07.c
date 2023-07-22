#include <stdio.h>
int main(){
int n=0;
scanf("%d",&n);
printf("\n");
for(int i=1;i<=n;i++){
	for(int j=1;j<=n;j++){
		if(j==1||i==1||j==n||i==n)
			printf("*");
			else
				printf(" ");
				}
	printf("\n");
}
return 0;
}
