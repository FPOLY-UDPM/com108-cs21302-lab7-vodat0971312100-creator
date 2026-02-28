/******************************************************************************
 * Họ và tên: [Nguyễn Võ Minh Đạt]
 * MSSV:      [PS49299]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
int main()
{
    char tiepTuc;
    char chuoi[100];
    int phuAm = 0, nguyenAm = 0;

    printf("Bạn hãy nhập vào chuỗi ký tự cần kiểm tra: \n");
    fgets(chuoi, sizeof(chuoi), stdin);
    for(int i = 0; i < strlen(chuoi); i++)
    {
        if(chuoi[i] == 'a' || chuoi[i] == 'e' || chuoi[i] == 'u' || chuoi[i] == 'i' || chuoi[i] == 'o' || chuoi[i] == 'y'
        || chuoi[i] == 'A' || chuoi[i] == 'E' || chuoi[i] == 'U' || chuoi[i] == 'I' || chuoi[i] == 'O' || chuoi[i] == 'Y' )
        {
            nguyenAm = nguyenAm + 1;
        }
        else if (chuoi[i] == ' ')
        {
            continue;
        }
        else phuAm = phuAm + 1;
    }

    printf("\nChuỗi bạn vừa nhập có %d ký tự nguyên âm\n", nguyenAm);
    printf("Chuỗi bạn vừa nhập có %d ký tự phụ âm\n", phuAm);

    printf("\nBạn có muốn tiếp tục không? (y/n): ");
    scanf("%c", &tiepTuc);
    getchar();
    if(tiepTuc == 'y' || tiepTuc == 'Y');
    return 0;
}