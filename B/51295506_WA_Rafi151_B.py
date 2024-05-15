def is_triangular_number(n):
    # Calculate the n-th triangular number
    triangular_number = (n * (n + 1)) // 2
    
    # Check if the given integer equals the triangular number
    if triangular_number == n:
        return "YES"
    else:
        return "NO"

# Input
n = int(input())

# Output
print(is_triangular_number(n))
