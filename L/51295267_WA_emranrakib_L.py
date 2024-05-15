def generate_anti_fibonacci_permutation(n):
    permutation = [1, 2, 3]

    for i in range(3, n):
        next_element = i + 1
        while next_element - 2 + permutation[-1] == permutation[-2] or next_element - 2 + permutation[-1] == permutation[-3]:
            next_element += 1
        permutation.append(next_element)

    return permutation

# Read input
t = int(input())

# Generate and print anti-Fibonacci permutations for each test case
for _ in range(t):
    n = int(input())
    permutation = generate_anti_fibonacci_permutation(n)
    print(*permutation)
