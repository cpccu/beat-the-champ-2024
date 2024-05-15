def reflection(n):
    return int(str(n)[::-1])

def weight(n):
    return n * reflection(n)


l, r = map(int, input().split())


max_weight = 0


for num in range(l, r + 1):
    
    w = weight(num)
    
    max_weight = max(max_weight, w)


print(max_weight)
