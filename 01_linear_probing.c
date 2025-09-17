#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int hashTable[SIZE];

void init() {
    for (int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int idx = hashFunction(key);
    int start = idx;
    while (hashTable[idx] != -1) {
        idx = (idx + 1) % SIZE;
        if (idx == start) {
            printf("Hash Table is full\n");
            return;
        }
    }
    hashTable[idx] = key;
}

int search(int key) {
    int idx = hashFunction(key);
    int start = idx;
    while (hashTable[idx] != -1) {
        if (hashTable[idx] == key) return 1;
        idx = (idx + 1) % SIZE;
        if (idx == start) break;
    }
    return 0;
}

int main() {
    init();
    int keys[] = {10, 20, 5, 15, 7};
    for (int i = 0; i < 5; i++)
        insert(keys[i]);

    printf("Hash Table: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", hashTable[i]);
    printf("\n");

    printf("Search 15: %d\n", search(15));
    printf("Search 99: %d\n", search(99));
    return 0;
}
