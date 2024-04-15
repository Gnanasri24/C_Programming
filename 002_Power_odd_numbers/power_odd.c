#include <stdio.h>
#include <math.h>
int main(){
	int count = 0,i=1,n;
	long int sum=0;
        // Code here.
	scanf("%d",&n);
        while(count !=n){
            
            if(i%2 !=0){
                sum = sum + pow(i,2);
                count++;
            }
            i++;
        }

	printf("\n%ld",sum);
}
