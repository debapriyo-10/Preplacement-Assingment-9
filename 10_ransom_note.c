#include <stdio.h>
#include <string.h>

int canConstruct(char* ransomNote, char* magazine) {
    int freq[256] = {0};
    for (int i = 0; magazine[i]; i++)
        freq[(unsigned char)magazine[i]]++;
    for (int i = 0; ransomNote[i]; i++) {
        if (--freq[(unsigned char)ransomNote[i]] < 0)
            return 0;
    }
    return 1;
}

int main() {
    char ransomNote[] = "aa";
    char magazine[] = "aab";
    printf("%d\n", canConstruct(ransomNote, magazine));
    return 0;
}
