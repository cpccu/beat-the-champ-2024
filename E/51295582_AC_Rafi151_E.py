def is_dangerous(s):
    # Iterate through the string
    for i in range(len(s) - 6):
        # Check if there are at least 7 consecutive players of the same team
        if s[i:i+7] == "0000000" or s[i:i+7] == "1111111":
            return "YES"
    return "NO"

# Input
s = input()

# Output
print(is_dangerous(s))
