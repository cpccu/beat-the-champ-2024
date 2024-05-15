import math

def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True
    if n % 2 == 0 or n % 3 == 0:
        return False
    i = 5
    while i * i <= n:
        if n % i == 0 or n % (i + 2) == 0:
            return False
        i += 6
    return True

def find_winning_move(q):
    if is_prime(q):
        return 1, q
    for i in range(2, int(math.sqrt(q)) + 1):
        if q % i == 0 and not is_prime(i):
            return 1, i
    return 2, 0

# Input
q = int(input())

# Finding the winning move
winner, move = find_winning_move(q)

# Output
print(winner)
if winner == 1:
    print(move)
