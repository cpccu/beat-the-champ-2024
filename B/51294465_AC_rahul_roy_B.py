import math

def is_triangular_number(num):
    return math.isqrt(8 * num + 1) ** 2 == 8 * num + 1

# Example usage:
num = int(input())
if is_triangular_number(num):
    print("YES")
else:
    print("NO")
