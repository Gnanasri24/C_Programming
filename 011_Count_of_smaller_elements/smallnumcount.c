#include <stdio.h>

int main(){

	int N,X,count = 0;
	printf("Enter array size: ");
	scanf("%d",&N);
	int arr[N];
	printf("\nEnter elements of array line by line: \n");

	for(int i = 0; i < N; i++){

		scanf("%d",&arr[i]);
	}

	printf("Enter the number X to find the count of numbers less than X: ");
	scanf("%d",&X);

	for(int j = 0; j < N; j++){

		if(arr[j] <= X ){

			count++;
			printf("%d \n",arr[j]);
		}
	}

	printf("%d",count);
}
