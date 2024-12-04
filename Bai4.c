#include<stdio.h>

void reverse(){
	char c;
	scanf("%c", &c);
	
	// Hàm kiem tra khi nguoi dung nhan enter de ket thuc chuoi
	if(c != '\n'){
		reverse();
		printf("%c", c);		
	}
}

int main(){
	printf("Nhap chuoi ki tu: ");
	reverse();
}
