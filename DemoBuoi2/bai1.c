#include <stdio.h>

int main() {
  // Nhập 2 số a và b từ bàn phím
  float a, b; // Khai báo
  char c;
  printf("Hãy nhập giá trị của a: ");
  scanf("%f", &a); // fflush(stdin);
  printf("\nHãy nhập giá trị của b: ");
  scanf("%f", &b);
  // Nhập 1 kí tự + - * / %
  printf("Hãy nhập phép tính mà bạn muốn: ");
  // scanf(" %c", &c); // %c đại diện cho 1 kí tự bất kì
  scanf("%s", &c); // %s đại diện cho 1 chuỗi
  // Tính toán và in ra màn hình
  // Quét tất cả các case từ trên xuống dưới, nếu case đó đúng với điều kiện thì
  // chạy tất cả các câu lệnh phía dưới (cho đến khi gặp break)
  switch (c) {
  case '+':
    printf("\nKết quả của %.2f + %.2f = %.2f", a, b,
           (a + b)); // %.2f để làm tròn đến 2 cs thập phân
    break;
  case '-':
    printf("\nKết quả của %.2f - %.2f = %.2f", a, b, (a - b));
    break; // \n tương đương với kí tự enter - xuống dòng
  case '*':
    printf("\nKết quả của %.2f * %.2f = %.2f", a, b, (a * b));
    break;
  case '/':
    printf("\nKết quả của %.2f / %.2f = %.2f", a, b, (a / b));
    break; //break là câu lệnh thoát khỏi 1 cấu trúc code (switch-case, vòng lặp)
  case '%':
    printf("\nKết quả của %.2f chia dư %.2f = %d", a, b, ((int)a % (int)b));
    break; // số thập phân không thể tính chia dư % => ép kiểu về số nguyên
  default: // Khi tất cả các case không phù hợp thì sẽ chạy câu lệnh ở default 
    printf("\nMuốn tính gì vậy ba?");
    break;
  }
}