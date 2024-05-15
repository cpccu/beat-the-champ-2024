def is_valid_name(s):
    # Count occurrences of each letter
    counts = {}
    for char in s:
        if char.lower() in counts:
            counts[char.lower()] += 1
        else:
            counts[char.lower()] = 1
    
    # Check if counts match for "Timur"
    if 't' in counts and 'i' in counts and 'm' in counts and 'u' in counts and 'r' in counts:
        return counts['t'] >= 1 and counts['i'] >= 1 and counts['m'] >= 1 and counts['u'] >= 1 and counts['r'] >= 1
    else:
        return False

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input length of string and the string itself
    n = int(input())
    s = input()
    
    # Check if the string is a valid spelling of "Timur"
    if is_valid_name(s):
        print("YES")
    else:
        print("NO")
