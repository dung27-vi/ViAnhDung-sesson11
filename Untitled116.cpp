#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1, 36, 18, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max1 = INT_MIN, max2 = INT_MIN;

    if (n < 2) {
        printf("Loi: Mang co it hon 2 phan tu.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] < max1) {
            max2 = arr[i];
        }
    }

    if (max2 == INT_MIN) {
        printf("Loi: Khong co phan tu lon thu hai (cac phan tu trong mang deu bang nhau).\n");
    } else {
        printf("Phan tu lon nhat trong mang la: %d\n", max1);
        printf("Phan tu lon thu hai trong mang la: %d\n", max2);
    }
    
    return 0;
}

