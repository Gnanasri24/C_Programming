#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(){

	char s[] = "1234";
	long long mod = 1000000007; 
        long long ans = 0, prev = 0, curr = 0;
        for(int i = 0; i < strlen(s); i++)
        {
            curr = (prev * 10)%mod + (s[i]-'0') * (i+1);
            prev = curr%mod;
            ans = (ans + curr)%mod; 
        }
        printf("%lld \n ",ans%mod);
}
