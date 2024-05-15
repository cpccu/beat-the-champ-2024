def find_tiling(n):
    # If n is odd, there is no solution
    if n % 2 != 0:
        return -1
    
    # Initialize the colors and tiling array
    colors = "abcdefghijklmnopqrstuvwxyz"
    tiling = [["." for _ in range(n)] for _ in range(4)]
    
    # Fill the tiling with dominoes
    for i in range(n // 2):
        # Determine the color for the current pair of dominoes
        color = colors[i % len(colors)]
        
        # Fill the current pair of dominoes with the color
        tiling[0][2*i] = tiling[0][2*i+1] = color
        tiling[1][2*i] = tiling[1][2*i+1] = color
        tiling[2][2*i] = tiling[2][2*i+1] = color
        tiling[3][2*i] = tiling[3][2*i+1] = color
        
    # Convert the tiling array to strings
    tiling_strings = ["".join(row) for row in tiling]
    
    # Return the tiling
    return tiling_strings

# Input
n = int(input())

# Find the tiling
tiling = find_tiling(n)

# Output
if tiling == -1:
    print(-1)
else:
    for row in tiling:
        print(row)
