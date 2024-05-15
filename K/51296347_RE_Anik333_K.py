r, g, b = map(int, input().split())

# Calculate the minimal time
min_time = max((r - 1) // 2, 0) * 3 + 30  # Calculate the time for red cable cars
min_time = max(min_time, ((g - 1) // 2) * 3 + 31)  # Calculate the time for green cable cars
min_time = max(min_time, ((b - 1) // 2) * 3 + 32)  # Calculate the time for blue cable cars

# Output
print(min_time)
