num1 = input()
num2 = input()

# Calculate the answer
answer = ''.join(['1' if num1[i] != num2[i] else '0' for i in range(len(num1))])

# Output
print(answer)
