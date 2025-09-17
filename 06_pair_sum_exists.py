def pair_sum_exists(arr, target):
    seen = set()
    for num in arr:
        if target - num in seen:
            return True
        seen.add(num)
    return False

if __name__ == "__main__":
    arr = [10, 15, 3, 7]
    target = 17
    print(pair_sum_exists(arr, target))
