#include <stdio.h>

int main(){

	int N,count =0;
	printf("Enter a Number: ");
	scanf("%d",&N);

	while(N>0){

		if((N & 1) != 0){
	
			count++;
		}
		N = N >>1;
	}

	if(count % 2 == 0){
		printf("even");

	}else{
		printf("odd");
	}


}
