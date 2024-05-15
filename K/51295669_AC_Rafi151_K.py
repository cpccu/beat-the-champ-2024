def years_to_reach_rank(n, d, a, b):
    # Initialize the total years
    total_years = 0
    
    # Sum the years required to reach each rank from a to b-1
    for i in range(a, b):
        total_years += d[i-1]
    
    return total_years

# Input
n = int(input())
d = list(map(int, input().split()))
a, b = map(int, input().split())

# Output
print(years_to_reach_rank(n, d, a, b))
