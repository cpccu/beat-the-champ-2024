def reflection(n):
    return int(str(n).translate(str.maketrans('0123456789', '9876543210')))

def max_weight(l, r):
    max_weight = 0
    for n in range(l, r + 1):
        weight = n * reflection(n)
        max_weight = max(max_weight, weight)
    return max_weight


l, r = map(int, input().split())


print(max_weight(l, r))