def find_duplicates(arr):
    seen = set()
    duplicates = set()
    for num in arr:
        if num in seen:
            duplicates.add(num)
        else:
            seen.add(num)
    return list(duplicates)

if __name__ == "__main__":
    arr = [1, 2, 3, 1, 3, 6, 6]
    print(find_duplicates(arr))
