#include <stdio.h>

int main() {
    int n; 
    int i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n]; 

    printf("hap cac phan tu cua mang: \n");
    for(i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac phan tu trong mang la: ");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
