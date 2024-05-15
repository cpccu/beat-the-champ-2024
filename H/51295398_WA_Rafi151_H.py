def get_tiling(n):
    if n % 4 != 0:
        return -1
    
    colors = "abcdefghijklmnopqrstuvwxyz"
    tiling = [["" for _ in range(n)] for _ in range(4)]

    for i in range(n // 4):
        base_color_idx = i * 6
        for j in range(4):
            tiling[0][i * 4 + j] = colors[base_color_idx]
            tiling[1][i * 4 + j] = colors[base_color_idx + 1]
            tiling[2][i * 4 + j] = colors[base_color_idx + 1]
            tiling[3][i * 4 + j] = colors[base_color_idx + 2]
            base_color_idx += 2
    
    return tiling

# Input
n = int(input())

# Output
tiling = get_tiling(n)
if tiling == -1:
    print(-1)
else:
    for row in tiling:
        print("".join(row))
