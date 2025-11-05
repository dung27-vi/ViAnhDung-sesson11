#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5, 2, 3, 4, 2, 5, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxCount = 0;
    int mostFrequentElement = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequentElement = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat la: %d\n", mostFrequentElement);
    printf("So lan xuat hien: %d\n", maxCount);

    return 0;
}
