def is_triangular_number(n):
    k = 0
    while k * (k + 1) // 2 < n:
        k += 1
    return k * (k + 1) // 2 == n

# Read the given integer
n = int(input())

# Check if it's a triangular number and print the result
if is_triangular_number(n):
    print("YES")
else:
    print("NO")
