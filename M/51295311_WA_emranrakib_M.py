def is_valid_spelling(s):
    # Check if the length is exactly 5
    if len(s) != 5:
        return False
    
    # Check if the first letter is 'T' (uppercase)
    if s[0] != 'T':
        return False
    
    # Check if the remaining letters are a permutation of 'i', 'm', 'u', 'r' (lowercase)
    other_letters = sorted(s[1:].lower())
    return other_letters == ['i', 'm', 'r', 'u']

# Read input
s = input()

# Check if s is a valid spelling of "Timur"
if is_valid_spelling(s):
    print("YES")
else:
    print("NO")
