#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 1) { 
            arr[i] += 2;
        } else { 
            arr[i] += 3;
        }
    }

    printf("[");
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
        if (i < 4) printf(", "); 
    }
    printf("]\n");

    return 0;
}
