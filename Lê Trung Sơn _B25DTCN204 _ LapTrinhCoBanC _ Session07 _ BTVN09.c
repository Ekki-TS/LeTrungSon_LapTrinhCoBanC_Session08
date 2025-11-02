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
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMang sau khi nhap la :\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("\nCac phan tu cua mang nam tren duong bien la :\n");
    for (int i = 0; i < hang; i++) {
        for (int j = 0; j < cot; j++) {
            if (i == 0 || i == hang - 1 || j == 0 || j == cot - 1)
                printf("%d ", a[i][j]);
            else
                printf("  "); 
        }
        printf("\n");
    }

    return 0;
}
