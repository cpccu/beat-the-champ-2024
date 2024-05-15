def xor_binary_strings(a, b):
    # Initialize an empty result string
    result = []
    
    # Iterate through each digit in the strings
    for i in range(len(a)):
        if a[i] != b[i]:
            result.append('1')
        else:
            result.append('0')
    
    # Join the list into a single string and return
    return ''.join(result)

# Read input
a = input().strip()
b = input().strip()

# Get the result of the XOR operation on the binary strings
result = xor_binary_strings(a, b)

# Print the result
print(result)
