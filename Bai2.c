#include<stdio.h>

int sum(int n, int m){
	if (n > m) {
        return 0;
    } else {
        return n + sum(n + 1, m); 
    }	
}

int main(){
	int n, m;
	
	do {
        printf("Nhap so n va m (n < m): ");
        scanf("%d %d", &n, &m);
        if(n > m){
            printf("So n phai nho hon so m! Vui long nhap lai.\n");
        }
    } while(n > m);  

	
	int result = sum(n,m);
	printf("Tong cac so tu %d den %d la: %d", n, m, result);
	return 0;
}
