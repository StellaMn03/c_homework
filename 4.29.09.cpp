#include <iostream>
int main(){
    const int n = 3;
	int arr[n];
	int** ptr = (int**)malloc(n*sizeof(int*));
	for(int i = 0;i < n;++i)
	{
			ptr[i]=(int*)malloc(n*sizeof(int));
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			std::cin >> ptr[i][j];
		}
	}
int sum = 0;
for(int i = 0;i<1.0*n/2;i++){
	for(int j = i;j<n-i;j++){
		sum+=ptr[i][j];
	}
}
std::cout << sum;
	for(int i = 0;i < n;++i){
		free(ptr[i]);
	}
	free(ptr);	return 0;
	}

