#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int longestConsecutive(int arr[], int n) {
    qsort(arr, n, sizeof(int), cmp);
    int longest = 1, curr = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1) {
            curr++;
        } else if (arr[i] != arr[i - 1]) {
            curr = 1;
        }
        if (curr > longest) longest = curr;
    }
    return longest;
}

int main() {
    int arr[] = {100, 4, 200, 1, 3, 2};
    int n = 6;
    printf("%d\n", longestConsecutive(arr, n));
    return 0;
}
