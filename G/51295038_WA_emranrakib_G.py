def reflection(n):
    return int(str(n)[::-1])

def weight(n):
    return n * reflection(n)


l, r = map(int, input().split())


reflection_l = reflection(l)
reflection_r = reflection(r)


max_weight = max(l * reflection_l, r * reflection_r)


for i in range(l + 1, r):
    max_weight = max(max_weight, i * reflection(i))


print(max_weight)
