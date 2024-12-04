#include<stdio.h>

int ToHop(int k, int n){
	if(k == n || k == 0){
		return 1;
	}
	return ToHop(k, n-1) + ToHop(k-1, n-1);
}

int main(){
	int n, k;
	do{
		printf("Moi nhap so n: ");
		scanf("%d", &n);
		printf("Moi nhap so k: ");
		scanf("%d", &k);
		if(k > n){
			printf("So k phai nho hon so n!\n");
		}
	}while(k > n);
	
	printf("To hop C(%d, %d) la: %d", k, n, ToHop(k, n));
	
	return 0;
}
