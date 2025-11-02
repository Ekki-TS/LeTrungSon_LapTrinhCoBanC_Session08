#include <stdio.h>

int main() {
    int a[5];           
    int i;
    int max, min;

    printf("Nhap 5 so nguyen:\n");
    for(i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    max = a[0];
    min = a[0];

    for(i = 0; i < 5; i++) {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }

    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);

    return 0;
}
