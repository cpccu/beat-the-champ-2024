import math


r, g, b = map(int, input().split())


max_cablecars_needed = max(math.ceil(r / 2), math.ceil(g / 2), math.ceil(b / 2))


total_time = max_cablecars_needed * 30


print(total_time)
