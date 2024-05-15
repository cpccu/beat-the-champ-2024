def max_dominoes(M, N):
    # Calculate the total number of squares on the board
    total_squares = M * N
    
    # Calculate the maximum number of dominoes
    max_dominoes = total_squares // 2
    
    return max_dominoes

# Input
M, N = map(int, input().split())

# Output
print(max_dominoes(M, N))
