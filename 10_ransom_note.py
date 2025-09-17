from collections import Counter

def can_construct_ransom(ransomNote, magazine):
    ransom_count = Counter(ransomNote)
    magazine_count = Counter(magazine)
    for c in ransom_count:
        if ransom_count[c] > magazine_count.get(c, 0):
            return False
    return True

if __name__ == "__main__":
    ransomNote = "aa"
    magazine = "aab"
    print(can_construct_ransom(ransomNote, magazine))
