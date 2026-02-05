/******************************************************************************
 * Họ và tên: [Tôn Thất Gia Nghi]
 * MSSV:      [PS48181]
 * Lớp:       [CS21301]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
int main() {
    int n, m, matrix[100][100], squaredMatrix[100][100];

    // Nhập số hàng và số cột của ma trận
    printf("Nhập số hàng của ma trận: ");
    scanf("%d", &n);
    printf("Nhập số cột của ma trận: ");
    scanf("%d", &m);

    // Nhập các phần tử của ma trận
    printf("Nhập các phần tử của ma trận:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Tính bình phương các phần tử trong ma trận
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            squaredMatrix[i][j] = matrix[i][j] * matrix[i][j];
        }
    }

    // Xuất ma trận bình phương
    printf("Ma trận sau khi bình phương các phần tử là:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", squaredMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
