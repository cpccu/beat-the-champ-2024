import math

def smallest_prime_factor(n):
    # Find the smallest prime factor of n
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return i
    return n

# Read input
q = int(input())

# Find the smallest prime factor of q
smallest_factor = smallest_prime_factor(q)

# If the smallest factor is equal to q, the first player wins
if smallest_factor == q:
    print(1)  # First player wins by choosing q
else:
    print(smallest_factor)  # First player wins by choosing the smallest prime factor of q
