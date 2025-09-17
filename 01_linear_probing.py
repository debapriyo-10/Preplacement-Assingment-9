class LinearProbingHashTable:
    def __init__(self, size):
        self.size = size
        self.table = [None] * size

    def hash_function(self, key):
        return key % self.size

    def insert(self, key):
        idx = self.hash_function(key)
        start = idx
        while self.table[idx] is not None:
            idx = (idx + 1) % self.size
            if idx == start:
                raise Exception("Hash Table is full")
        self.table[idx] = key

    def search(self, key):
        idx = self.hash_function(key)
        start = idx
        while self.table[idx] is not None:
            if self.table[idx] == key:
                return True
            idx = (idx + 1) % self.size
            if idx == start:
                break
        return False

if __name__ == "__main__":
    h = LinearProbingHashTable(7)
    for k in [10, 20, 5, 15, 7]:
        h.insert(k)
    print("Table:", h.table)
    print("Search 15:", h.search(15))
    print("Search 99:", h.search(99))
