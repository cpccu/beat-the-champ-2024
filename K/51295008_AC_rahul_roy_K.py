n = int(input())
d = list(map(int, input().split()))
a, b = map(int, input().split())

# Calculate the total number of years needed
total_years = sum(d[a-1:b-1])

# Output the result
print(total_years)
