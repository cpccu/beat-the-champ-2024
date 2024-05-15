def can_construct_haiku(phrase_a, phrase_b, phrase_c):
    total_syllables = phrase_a + phrase_b + phrase_c
    if total_syllables == 5 + 7 + 5:
        return "YES"
    else:
        return "NO"

# Reading input from standard input
input_str = input().split()
A, B, C = map(int, input_str)

# Checking if Haiku can be constructed
result = can_construct_haiku(A, B, C)
print(result)
