#include <stdio.h>

int main() {
  // nhập 1 số n
  int n;      // Khai báo
  int m = 10; // Khởi tạo - không làm gì cả
  printf("Hãy nhập 1 số n: ");
  scanf("%d", &n);
  // tính tổng các số chẵn từ 1 đến n
  // int i = 1: Khởi tạo giá trị ban đầu cho biến chạy
  // i<= n là điều kiện để câu lệnh chạy
  // i++ update biến chạy
  // Vòng lặp để thực hiện các công việc giống nhau nhiều lần
  // mà không cần phải viết lại code
  int i = 2;                  // Nếu dev c bị lỗi
  for (; i <= n; i = i + 2) { // nếu ko bị thi để int i = 2
    printf("\nChống đẩy lần thứ %d", i);
  }
  printf("\nSau khi chạy vòng lặp giá trị của i là: %d, n = %d", i, n);
  printf("\n________________________");
  for (; i >= n;  i -= 2) { // i-=2 tương đương với i = i - 2;
    printf("\nChống đẩy lần thứ %d", i);
  }
  printf("\nSau khi chạy vòng lặp giá trị của i là: %d, n = %d", i, n);
  // Khi chạy vòng lặp thì sẽ kiểm tra ngay điều kiện ứng với biến chạy (i) điều
  // kiện là i <= n. Trong th này, bạn nhập n = 20 thì i ban đầu là 2 sẽ <= 20
  // -> chạy Ở các lần lập tiếp theo, mỗi lần biến i sẽ được + thêm 2 đơn vị từ
  // lần lặp trước 4 6 8 10 .. Kiểm tra biến -> Kiểm tra điều kiện -> Chạy lệnh
  // nếu DK đúng -> Update biến chạy
}