def min_operations(test_cases):
    results = []
    for n, sequence in test_cases:
        operations = 0
        for i in range(1, n + 1):
            if sequence[i - 1] > i:
                sequence.insert(i - 1, i)
                operations += 1
        results.append(operations)
    return results

# Example usage:
t = int(input().strip())
test_cases = []
for _ in range(t):
    n = int(input().strip())
    sequence = list(map(int, input().strip().split()))
    test_cases.append((n, sequence))

results = min_operations(test_cases)
for result in results:
    print(result)
