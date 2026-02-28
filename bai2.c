/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH ĐĂNG NHẬP BẰNG USERNAME VÀ PASSWORD 
//  Input: Nhập vào username và password 
//  Output: Đăng nhập thành công hay không thành công

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char username[30], password[30]; // lưu tên người nhập vào
    char correctUsername[] = "admin"; // tài khoản  và mật khẩu đúng để chương trình kiểm tra
    char correctPassword[] = "123456";

    printf("===== CHUONG TRINH DANG NHAP =====\n");

    printf("Nhap username: ");
    scanf("%s", username);

    printf("Nhap password: ");
    scanf("%s", password);

    if(strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0)
    // hàm strcmp so sánh 2 chuỗi và trả về 0 nếu 2 chuỗi giống nhau
    // Điều kiện kiểm tra nếu tên và mk đúng thì đăng nhập thành công và ngược lại báo lỗi
    {
        printf("\nDang nhap thanh cong!\n");
    } else {
        printf("\nDang nhap khong thanh cong. Vui long thu lai.\n");
    }

    return 0;
}
