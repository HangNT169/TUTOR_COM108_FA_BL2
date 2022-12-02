#include <stdio.h>

int main() {
  char x;
  // Bài 3: Sử dụng while làm menu. Nhập 1 ký tự từ bàn phím. Nếu là ký tự từ a
  // b c d e => tiếp tục cho nhập, ‘f’ => dừng việc nhập
  while (x != 'f') { // 'f' là kí tự f
    printf("\nChức năng a");
    printf("\nChức năng b");
    printf("\nChức năng c");
    printf("\nChức năng d");
    printf("\nChức năng e");
    printf("\nNhập lựa chọn của bạn: ");
    scanf("%s", &x);
    if (x == 'a')
      printf("\nBạn vừa chọn chức năng a");
    else if (x == 'b')
      printf("\nBạn vừa chọn chức năng b");
    else if (x == 'c')
      printf("\nBạn vừa chọn chức năng c");
    else if (x == 'd')
      printf("\nBạn vừa chọn chức năng d");
    else if (x == 'e')
      printf("\nBạn vừa chọn chức năng e");
    else {
      if (x == 'f')
        break; // Break => thoát khỏi vòng lặp
      else
        printf("Nhập sai rồi ông già!!!");
    } // {} là 1 block of code => Khối lệnh
    // Nếu sau if mà câu lệnh chạy chỉ có 1 thì ko cần khối, nếu nhiều câu lệnh
    // => Đưa vào khối lệnh
  }
}