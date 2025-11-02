#include <stdio.h>

int main() {
    int n;
    int i;
    int a[n]; 

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang (chi nhap so le):\n");
    for(i = 0; i < n; i++) {
        do {
            printf("a[%d] = ", i);
            scanf("%d", &a[i]);
            if(a[i] % 2 == 0) {
                printf("Gia tri vua nhap la so chan! Vui long nhap lai.\n");
            }
        } while(a[i] % 2 == 0);  
    }

    printf("\nCac phan tu le trong mang la: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
