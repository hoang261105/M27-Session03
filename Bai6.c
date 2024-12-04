#include<stdio.h>

int totalArr(int arr[], int n){
	if(n == 0){
		return arr[0];
	}
	return arr[n] + totalArr(arr, n-1);
}

int main(){
	int n;
	
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Cac phan tu cua mang: \n");
	for(int i=0; i<n; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	
	printf("Tong cac phan tu trong mang la: %d", totalArr(arr, n-1));
	return 0;
}
