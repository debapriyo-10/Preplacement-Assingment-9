#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int visited[100] = {0};
    printf("Duplicates: ");
    for (int i = 0; i < n; i++) {
        if (visited[arr[i]]) {
            printf("%d ", arr[i]);
        } else {
            visited[arr[i]] = 1;
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 1, 3, 6, 6};
    int n = 7;
    findDuplicates(arr, n);
    return 0;
}
