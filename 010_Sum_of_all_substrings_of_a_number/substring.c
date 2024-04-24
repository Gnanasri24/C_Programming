#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){

	char str1[] = "4949530612642323625417080671";
	int length = strlen(str1);
	long long sum = 0;
	for(int i = 0; i<length;i++){

	long long num =0;
		for(int j = i; j<length;j++){

			num = num * 10 + (str1[j] - '0') % 1000000007;
			printf("%lld \n",num);
                        sum = (sum + num) % 1000000007;
		}
	}

	printf("%lld",sum);
}
