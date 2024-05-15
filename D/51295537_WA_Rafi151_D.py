def min_clicks(n, a):
    # Calculate the total number of clicks needed
    total_clicks = sum(a) + n - 1
    return total_clicks

# Input
n = int(input())
a = list(map(int, input().split()))

# Output
print(min_clicks(n, a))
