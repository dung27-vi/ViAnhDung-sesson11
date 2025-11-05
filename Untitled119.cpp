#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3, 7, 8, 1, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
                j--; 
            }
        }
    }

    printf("Mang sau khi xoa cac phan tu trung lap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
