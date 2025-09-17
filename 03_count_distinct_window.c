#include <stdio.h>
#include <stdlib.h>

void countDistinct(int arr[], int n, int k) {
    for (int i = 0; i <= n - k; i++) {
        int distinct = 0;
        for (int j = 0; j < k; j++) {
            int flag = 0;
            for (int p = 0; p < j; p++) {
                if (arr[i + j] == arr[i + p]) {
                    flag = 1;
                    break;
                }
            }
            if (!flag) distinct++;
        }
        printf("%d ", distinct);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 1, 3, 4, 2, 3};
    int n = 7, k = 4;
    countDistinct(arr, n, k);
    return 0;
}
