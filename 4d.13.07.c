#include <stdio.h>//4֊րդ խնդիր դասին
int main(){
	int arr[4];
	int index=0;
	while(index<4){
		scanf("%d",&arr[index]);
		index++;
}
if( arr[0]+arr[1]+arr[2]+arr[3]==0)

{
int min =arr[0];
   for (int i=1;i<4;i++){
	   if(arr[i]<min)
		   min=arr[i];
   }
   printf("%d",min);
   return 0;
	    
}

}

