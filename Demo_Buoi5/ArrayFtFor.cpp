#include<stdio.h>

// Viet chuong trinh tinh tong so sinh vien trong tang 3 toa P
// Biet so luong sinh vien moi phong
int main() {
	int danh_sach_phong[4]; // -> Tao ra 4 phong
	
	// Cach truyen thong
	//	danh_sach_phong[0] = 40; // Gan gia tri cho phong thu nhat
	//	danh_sach_phong[1] = 39; // Gan gia tri cho phong thu hai
	//	danh_sach_phong[2] = 38; // Gan gia tri cho phong thu ba
	//	danh_sach_phong[3] = 40; // Gan gia tri cho phong thu tu

	int i; // bien dem
	// Cach hien dai
	// Gan gia tri cho tung phan tu cua mang
	for(i = 0; i < 4; i++) {
		printf("Moi nhap gia tri cho phong thu %d: ", i);
		scanf("%d", &danh_sach_phong[i]);
	}
	
	// Duyet tung phan tu cua mang
	for(i = 0; i < 4; i++) {
		printf("Phong thu %d co gia tri = %d\n", i, danh_sach_phong[i]);
	}

	// Tinh tong
	int tong = 0;
	for(i = 0; i < 4; i++) {
		tong = tong + danh_sach_phong[i];
	}
	printf("Tong so sinh vien = %d", tong);
}
