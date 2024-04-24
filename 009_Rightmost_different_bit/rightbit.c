#include <stdio.h>

int main(){

	int m,n,result,position=0;
	scanf("%d %d",&m,&n);

	result = m ^ n;

	if(result == 0){

		printf("-1");
	}else{

		while(result > 0 ){

			if(result & 1 != 0){

				printf("%d",++position);
				break;
			}

			result = result >> 1;
			position++;
		}
	}


}
