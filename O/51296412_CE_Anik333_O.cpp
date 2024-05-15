r, g, b = map(int, input().split())

min_time = max((r - 1) // 2, 0) * 3 + 30  # Calculate the time for red cablecars
min_time = max(min_time, (g - 1) // 2 * 3 + 31)  # Calculate the time for green cablecars
min_time = max(min_time, (b - 1) // 2 * 3 + 32)  # Calculate the time for blue cablecars


print(min_time)