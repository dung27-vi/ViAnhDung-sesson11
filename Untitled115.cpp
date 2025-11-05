#include <stdio.h>
#include <string.h>

int linear_search(char arr[][50], int n, const char* target) {
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i], target) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    char arr[][50] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(arr) / sizeof(arr[0]);

    char target[50];
    printf("Nhap mot chuoi can tim: ");
    fgets(target, sizeof(target), stdin);

    target[strcspn(target, "\n")] = '\0';

    int index = linear_search(arr, n, target);

    if (index != -1) {
        printf("Chuoi '%s' duoc tim thay o vi tri %d.\n", target, index);
    } else {
        printf("Khong tim thay chuoi '%s' trong mang.\n", target);
    }

    return 0;
}

