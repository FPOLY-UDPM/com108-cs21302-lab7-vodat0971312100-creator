/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char strings[5][100];   // là mản 2 chiều , Mảng chứa 5 chuỗi, mỗi chuỗi tối đa 99 ký tự
    char temp[100];         // lưu tạm 1 chuỗi  để hoán đổi
    int i, j;

    printf("===== CHUONG TRINH SAP XEP CHUOI =====\n");

    // Nhập 5 chuỗi từ người dùng
    for(i = 0; i < 5; i++) {
        printf("Nhap chuoi thu %d: ", i+1);
        fgets(strings[i], sizeof(strings[i]), stdin); 
        // fgets nhập chuỗi từ bàn phím cho phép có khoảng trắng
        //- strcspn(strings[i], "\n") tìm vị trí ký tự xuống dòng \n 
        //và thay bằng \0 để loại bỏ nó.

        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    // Sắp xếp chuỗi theo thứ tự chữ cái (Bubble Sort)
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(strcmp(strings[i], strings[j]) > 0) { //- strcmp() so sánh hai chuỗi:
               //Trả về > 0 nếu chuỗi thứ nhất lớn hơn chuỗi thứ hai
                strcpy(temp, strings[i]); 
        //- Nếu cần hoán đổi, dùng strcpy() để sao chép chuỗi qua biến tạm rồi đổi chỗ.

                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    // In ra kết quả sau khi sắp xếp
    printf("\n===== CAC CHUOI SAU KHI SAP XEP =====\n");
    for(i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
