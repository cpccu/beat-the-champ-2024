# Read input
n = int(input())
years_to_next_rank = list(map(int, input().split()))
a, b = map(int, input().split())

# Calculate the total years needed to reach rank b from rank a
total_years = sum(years_to_next_rank[a-1:b-1])

# Print the result
print(total_years)
