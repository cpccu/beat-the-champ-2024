# Function to find the minimum number of operations needed
def min_operations(n, sequence):
    operations = 0
    for i in range(n - 1, -1, -1):
        if sequence[i] > i + 1:
            operations += sequence[i] - (i + 1)
    return operations

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input length of sequence and the sequence itself
    n = int(input())
    sequence = list(map(int, input().split()))

    # Calculate and output the minimum number of operations needed
    print(min_operations(n, sequence))
