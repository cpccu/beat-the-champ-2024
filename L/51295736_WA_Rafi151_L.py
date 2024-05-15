def generate_anti_fibonacci_permutation(n):
    # Initialize an array with the first n positive integers
    p = list(range(1, n + 1))

    # Shuffle the array randomly
    import random
    random.shuffle(p)

    # Check if the permutation satisfies the anti-Fibonacci condition
    for i in range(2, n):
        if p[i - 2] + p[i - 1] == p[i]:
            # Swap adjacent elements to break the anti-Fibonacci condition
            p[i], p[i - 1] = p[i - 1], p[i]

    return p

# Example usage:
t = int(input())  # Number of test cases
for _ in range(t):
    n = int(input())  # Length of permutation
    perm = generate_anti_fibonacci_permutation(n)
    for val in perm:
        print(val)
