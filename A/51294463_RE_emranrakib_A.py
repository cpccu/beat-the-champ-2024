def calculate_xor(num1, num2):
    result = ""
    for digit1, digit2 in zip(num1, num2):
        if digit1 != digit2:
            result += "1"
        else:
            result += "0"
    return result

# Example usage
num1 = input().strip()
num2 = input().strip()
print(calculate_xor(num1, num2))
