#include<stdio.h>

int factorial(int n){
	if(n == 0){
		return 1;
	}
	
	return n * factorial(n-1);
}

int main(){
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	int result = factorial(n);
	printf("Giai thua cua %d la: %d", n, result);
	return 0;
}
