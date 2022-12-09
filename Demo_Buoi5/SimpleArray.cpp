#include<stdio.h> // Standard Input Output

// Viet chuong trinh tinh tong so sinh vien trong tang 3 toa P
// Biet so luong sinh vien moi phong
int main() {
	
	int tong = 0;
	
	// Cach truyen thong, thu cong
	//	int p301 = 40;
	//	int p302 = 39;
	//	int p303 = 38;
	//	...
	//	int p310 = 40;
	//	
	//	tong = p301 + p302 + ... + p310;
	
	// Cach hien dai
	// Su dung mang, co dau []
	int danh_sach_phong[4]; // -> Tao ra 4 phong
	
	printf("Gia tri cua phong thu nhat = %d\n", danh_sach_phong[0]);
	
	danh_sach_phong[0] = 40; // Gan gia tri cho phong thu nhat
	danh_sach_phong[1] = 39; // Gan gia tri cho phong thu hai
	danh_sach_phong[2] = 38; // Gan gia tri cho phong thu ba
	danh_sach_phong[3] = 40; // Gan gia tri cho phong thu tu
	
	printf("Sau khi gan = %d\n", danh_sach_phong[0]);
	printf("Sau khi gan = %d\n", danh_sach_phong[1]);
	printf("Sau khi gan = %d\n", danh_sach_phong[2]);
	printf("Sau khi gan = %d\n", danh_sach_phong[3]);
	
	printf("Tong so sinh vien = %d\n", tong);
}
