from collections import defaultdict

def count_distinct_elements(arr, k):
    freq = defaultdict(int)
    result = []
    for i in range(k):
        freq[arr[i]] += 1
    result.append(len(freq))

    for i in range(k, len(arr)):
        freq[arr[i - k]] -= 1
        if freq[arr[i - k]] == 0:
            del freq[arr[i - k]]
        freq[arr[i]] += 1
        result.append(len(freq))
    return result

if __name__ == "__main__":
    arr = [1, 2, 1, 3, 4, 2, 3]
    k = 4
    print(count_distinct_elements(arr, k))
