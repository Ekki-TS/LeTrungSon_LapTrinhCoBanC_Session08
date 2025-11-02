#include <stdio.h>

int main() {
    int hang, cot;

    // Nhập số hàng và cột
    printf("Nhap so hang: ");
    scanf("%d", &hang);
    printf("Nhap so cot: ");
    scanf("%d", &cot);

    int a[100][100]; 

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMang vua nhap la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%5d", a[i][j]); // %5d để căn đều các cột
        }
        printf("\n");
    }

    return 0;
}
