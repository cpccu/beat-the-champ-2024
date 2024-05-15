def generate_permutation(n):
    permutation = list(range(1, n + 1))
    for i in range(2, n):
        if permutation[i - 2] + permutation[i - 1] == permutation[i]:
            # If the condition is satisfied, swap elements to break it
            permutation[i], permutation[i - 1] = permutation[i - 1], permutation[i]
    return permutation

t = int(input())
for _ in range(t):
    n = int(input())
    permutation = generate_permutation(n)
    for num in permutation:
        print(num)
