#include <stdio.h>

int main() {
    int a[5];  
    int i, sochan = 0;

    printf("Nhap 5 so nguyen:\n");
    for(i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac so chan trong mang la: ");
    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0) {
            printf("%d ", a[i]);
            sochan = 1; 
        }
    }

    if(sochan == 0) {
        printf("\nMang khong chua so chan.");
    }

    return 0;
}
