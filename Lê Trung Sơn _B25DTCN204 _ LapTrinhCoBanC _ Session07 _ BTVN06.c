#include <stdio.h>

int main() {
    int a[5];
    int i;

    printf("Nhap 5 so nguyen:\n");
    for(i = 0; i < 5; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++) {
        if(a[i] % 2 == 0)
            a[i] = a[i] + 3;   
        else
            a[i] = a[i] + 2;   
    }

    printf("\nMang sau khi cong:\n");
    for(i = 0; i < 5; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}
