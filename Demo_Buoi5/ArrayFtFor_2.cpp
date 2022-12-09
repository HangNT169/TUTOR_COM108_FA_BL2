#include<stdio.h>

// Viet chuong trinh tinh tong so sinh vien trong tang 3 toa P
// Biet so luong sinh vien moi phong
int main() {
	int n; // Tong so phong
	printf("Moi nhap so phong: ");
	scanf("%d", &n);
	int danh_sach_phong[n]; // -> Tao ra n phong

	int i; // bien dem
	// Cach hien dai
	// Gan gia tri cho tung phan tu cua mang
	for(i = 0; i < n; i++) {
		printf("Moi nhap gia tri cho phong thu %d: ", i);
		scanf("%d", &danh_sach_phong[i]);
	}
	
	// Duyet tung phan tu cua mang
	for(i = 0; i < n; i++) {
		printf("Phong thu %d co gia tri = %d\n", i, danh_sach_phong[i]);
	}

	// Tinh tong
	int tong = 0;
	for(i = 0; i < n; i++) {
		tong = tong + danh_sach_phong[i];
	}
	printf("Tong so sinh vien = %d", tong);
}
