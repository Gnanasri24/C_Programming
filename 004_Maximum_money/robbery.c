#include <stdio.h>

int main(){

	int N,K;
	scanf("%d %d",&N,&K);

	if(N ==1 || N == 2){
                printf("%d",K);
            }else{
                if(N % 2 == 0){
                    printf("%d",K * (N/2));
                }else{
                    printf("%d",K * ((N/2)+1));
                }
            }
}
