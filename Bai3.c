#include<stdio.h>

int fibonacci(int n){
	if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d", &n);
	
	printf("%d so fibonacci dau tien la: \n", n);
	for(int i=0; i<n; i++){
		printf("%d ", fibonacci(i));
	}
	
}
