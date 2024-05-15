def calculate_time(color_group):
    # Calculate the number of cable cars needed for the group
    cable_cars_needed = (color_group + 1) // 2
    # Calculate the total time for the group to ascend
    total_time = cable_cars_needed * 30
    return total_time

def minimal_time(r, g, b):
    # Calculate total time for each color group
    r_time = calculate_time(r)
    g_time = calculate_time(g)
    b_time = calculate_time(b)
    
    # Find the maximum total time among the color groups
    max_time = max(r_time, g_time, b_time)
    
    # The first cable car is red, so we add 30 minutes for the first group to start
    return max_time + 30

# Input
r, g, b = map(int, input().split())

# Output
print(minimal_time(r, g, b))
