#include <stdio.h>

int pairSumExists(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {10, 15, 3, 7};
    int n = 4, target = 17;
    printf("%d\n", pairSumExists(arr, n, target));
    return 0;
}
