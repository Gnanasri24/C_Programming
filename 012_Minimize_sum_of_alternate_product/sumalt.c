#include <stdio.h>

#include <stdlib.h>

int compare(const void* num1, const void* num2) // comparing function  
{  
    int a = *(int*) num1;  
    int b = *(int*) num2;  
    if(a > b)  
    {  
        return 1;  
    }  
    else if(a < b)  
    {  
        return -1;  
    }  
    return 0;  
} 
long long altProduct(long long a[], long long n)
{
    // Your code goes here   
    qsort(a, n, sizeof(long long), compare);
   
    for(int j =0; j<n;j++){
	    printf("%lld \n",a[j]);
    }
    long long sum = 0;
    for (int i = 0; i < n / 2; i++) {
        sum += (long long)a[i] * a[n - i - 1];
    }
    
    return sum;
}

int main(){

	long long arr[] = {9,2,8,4,5,7,6,0};
	long long n = sizeof(arr) / sizeof(arr[0]);

	printf("%lld",altProduct(arr,n));
}
