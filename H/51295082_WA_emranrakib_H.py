def print_tiling(n):
    # Initialize a 4×n grid
    grid = [['.' for _ in range(n)] for _ in range(4)]

    # Fill the grid row by row, column by column
    for i in range(0, 4, 2):  # Iterate over even rows (0 and 2)
        for j in range(n):
            grid[i][j] = '#'
    
    # Print the grid
    for row in grid:
        print(''.join(row))

# Read input
n = int(input())

# Print the tiling
print_tiling(n)
