def reflection(n):
    # Convert the number to a string to manipulate digits
    n_str = str(n)
    # Replace each digit a with the digit (9 - a)
    reflected_str = ''.join(str(9 - int(digit)) for digit in n_str)
    # Convert back to integer, omitting leading zeros
    return int(reflected_str.lstrip('0')) if reflected_str != '0' else 0

def max_weight_in_range(l, r):
    max_weight = 0
    for num in range(l, r + 1):
        reflected_num = reflection(num)
        weight = num * reflected_num
        max_weight = max(max_weight, weight)
    return max_weight

# Input
l, r = map(int, input().split())

# Output
print(max_weight_in_range(l, r))
