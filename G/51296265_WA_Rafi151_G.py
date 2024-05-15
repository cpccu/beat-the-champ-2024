def max_weight(l, r):
    max_weight = 0
    multiplier = 1
    while l or r:
        l_digit = l % 10
        r_digit = r % 10
        max_digit = max(l_digit, 9 - r_digit)  # Calculate the maximum digit
        max_weight += max_digit * multiplier
        l //= 10
        r //= 10
        multiplier *= 10
    return max_weight

# Input
l, r = map(int, input().split())

# Output
print(max_weight(l, r))
