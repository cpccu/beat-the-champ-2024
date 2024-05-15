def can_construct_haiku(A, B, C):

    total_syllables = A + B + C
    if total_syllables == 17:
        return "YES"
    else:
        return "NO"


A, B, C = map(int, input().split())


print(can_construct_haiku(A, B, C))
