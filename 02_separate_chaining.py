class Node:
    def __init__(self, key):
        self.key = key
        self.next = None

class SeparateChainingHashTable:
    def __init__(self, size):
        self.size = size
        self.table = [None] * size

    def hash_function(self, key):
        return key % self.size

    def insert(self, key):
        idx = self.hash_function(key)
        node = Node(key)
        node.next = self.table[idx]
        self.table[idx] = node

    def search(self, key):
        idx = self.hash_function(key)
        curr = self.table[idx]
        while curr:
            if curr.key == key:
                return True
            curr = curr.next
        return False

if __name__ == "__main__":
    h = SeparateChainingHashTable(7)
    for k in [10, 20, 5, 15, 7]:
        h.insert(k)
    print("Search 15:", h.search(15))
    print("Search 99:", h.search(99))
