#include <stdio.h>
int main(){
int a,b,c=0;
scanf("%d %d %d",&a,&b,&c);
if (a==b || b==c || a==c)
{
	int arr[]={a,b,c};
	int max =arr[0];
	for(int i=0;i<3;i++){
	if (arr[i]>max)
		max=arr[i];
}
printf("The max number is` %d\n", max);
return  0;
}
}
