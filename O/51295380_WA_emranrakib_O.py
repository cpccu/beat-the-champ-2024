def min_operations_to_satisfy_condition(a):
    n = len(a)
    operations = 0
    for i in range(n):
        if a[i] > i + 1:
            operations += a[i] - (i + 1)
    return operations

# Read input
n = int(input())
a = list(map(int, input().split()))

# Find the minimum number of operations to satisfy the condition
min_ops = min_operations_to_satisfy_condition(a)
print(min_ops)
