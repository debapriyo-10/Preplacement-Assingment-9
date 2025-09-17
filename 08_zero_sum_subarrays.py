def zero_sum_subarrays(arr):
    prefix_sum = 0
    freq = {0: 1}
    count = 0
    for num in arr:
        prefix_sum += num
        count += freq.get(prefix_sum, 0)
        freq[prefix_sum] = freq.get(prefix_sum, 0) + 1
    return count

if __name__ == "__main__":
    arr = [6, 3, -1, -3, 4, -2, 2, 4, 6, -12, -7]
    print(zero_sum_subarrays(arr))
