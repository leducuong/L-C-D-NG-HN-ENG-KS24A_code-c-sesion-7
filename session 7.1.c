#include <stdio.h>

int main() {

    int n[] = {10, 20, 30, 40, 50};
    
   
    int length = sizeof(n) / sizeof(n[0]);

    printf("do dai cua mang: %d\n", length);

    printf("cac phan tu cua mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("array[%d] = %d\n", i, n[i]);
    }

    return 0;
}
