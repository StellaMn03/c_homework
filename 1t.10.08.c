#include <stdio.h>//փ ոքրից մեծ
int main(){
int n=0;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++){
     	if(arr[i]>arr[j])
     	{
	     	int tmp=0;
		    tmp=arr[i];
		    arr[i]=arr[j];
		    arr[j]=tmp;
	    }
	}
}
for(int i=0;i<n;i++){
printf("%d ",arr[i]);
}
return 0;
}
