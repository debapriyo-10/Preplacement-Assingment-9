#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

struct Node {
    int key;
    struct Node* next;
};

struct Node* hashTable[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int idx = hashFunction(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->next = hashTable[idx];
    hashTable[idx] = newNode;
}

int search(int key) {
    int idx = hashFunction(key);
    struct Node* curr = hashTable[idx];
    while (curr) {
        if (curr->key == key) return 1;
        curr = curr->next;
    }
    return 0;
}

int main() {
    int keys[] = {10, 20, 5, 15, 7};
    for (int i = 0; i < 5; i++)
        insert(keys[i]);

    printf("Search 15: %d\n", search(15));
    printf("Search 99: %d\n", search(99));
    return 0;
}
