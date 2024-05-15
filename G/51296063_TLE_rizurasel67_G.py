def reflection(n):
    result = 0
    place = 1
    while n > 0:
        digit = n % 10
        result += (9 - digit) * place
        place *= 10
        n //= 10
    return result

def calculate_weight(n):
    return n * reflection(n)

def max_weight_in_range(l, r):
    max_weight = 0

    for n in range(l, r + 1):
        weight = calculate_weight(n)
        max_weight = max(max_weight, weight)

    return max_weight

l, r = map(int, input().split())
max_weight = max_weight_in_range(l, r)
print(max_weight)
