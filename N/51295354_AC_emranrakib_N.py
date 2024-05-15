def can_construct_haiku(A, B, C):
    total_syllables = A + B + C
    return total_syllables == 17

# Read input
A, B, C = map(int, input().split())

# Check if Iroha can construct a Haiku
if can_construct_haiku(A, B, C):
    print("YES")
else:
    print("NO")
