from collections import Counter

def count_pairs_with_sum(arr, target):
    freq = Counter(arr)
    count = 0
    for num in arr:
        count += freq[target - num]
        if target - num == num:
            count -= 1
    return count // 2

if __name__ == "__main__":
    arr = [1, 5, 7, -1, 5]
    target = 6
    print(count_pairs_with_sum(arr, target))
