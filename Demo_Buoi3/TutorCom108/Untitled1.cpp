// Thu vien chuan vao ra
// Khong co cai nay khong printf duoc
#include<stdio.h> // Standard Input Output Library

// Chuong trinh bat dau chay tu ham main()
int main() {
	printf("Hello FPoly Bee!");
	printf("\n"); // Ky hieu xuong dong
	printf("Good Evening!!\n");
	
	int i; // Khoi tao bien dem
	// Dung vong lap de viet 100 cau xin loi
	// Cach 1: Dung For
	printf("Cach 1: Su dung For\n");
	i = 1;
	for( ; i <= 100; ) { // khai bao int i o day thi chi ton tai trong vong for
		// In ra cu phap co dang "Sorry x?"
		printf("Sorry x%d \n", i);
		i++;
	}
	
	// Cach 2: Dung While
	printf("Cach 2: Su dung While\n");
	i = 1;
	while(i <= 100) {
		// In ra cu phap co dang "Sorry x?"
		printf("Sorry x%d \n", i);
		i++;
	}
	
	// Cach 3: Dung Do-While
	printf("Cach 3: Su dung Do-While\n");
	i = 1;
	do {
		// In ra cu phap co dang "Sorry x?"
		printf("Sorry x%d \n", i);
		i++;
	} while(i <= 100);
}
