#include <stdio.h>

int main() {
    int hang, cot;

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
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }__x86_64

    printf("\nCac phan tu nam tren duong bien la:\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {ffff
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1) {
                printf("%5d", a[i][j]);
            }
        }
    }

    printf("\n");

    return 0;
}
