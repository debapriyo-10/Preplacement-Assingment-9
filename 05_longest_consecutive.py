def longest_consecutive(nums):
    num_set = set(nums)
    longest = 0
    for num in nums:
        if num - 1 not in num_set:
            length = 1
            while num + length in num_set:
                length += 1
            longest = max(longest, length)
    return longest

if __name__ == "__main__":
    arr = [100, 4, 200, 1, 3, 2]
    print(longest_consecutive(arr))
