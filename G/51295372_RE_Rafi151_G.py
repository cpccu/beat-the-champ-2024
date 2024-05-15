def reflection(n):
    return int(str(9 - int(d)) for d in str(n))

def weight(n):
    return n * reflection(n)

def max_weight(l, r):
    max_product = 0
    for i in range(l, r + 1):
        product = weight(i)
        if product > max_product:
            max_product = product
    return max_product

# Input
l, r = map(int, input().split())

# Output
print(max_weight(l, r))
